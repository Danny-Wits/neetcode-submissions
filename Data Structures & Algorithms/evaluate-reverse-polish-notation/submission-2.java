class Solution {
    public int evalRPN(String[] tokens) {
        if (tokens.length == 1)
            return Integer.parseInt(tokens[0]);
        Deque<String> stack = new ArrayDeque<>();
        for (String x : tokens) {
            if (isOperator(x)) {
                int o1 = Integer.parseInt(stack.pop());
                int o2 = Integer.parseInt(stack.pop());
                int val = eval(o2, o1, x);
                stack.push(Integer.toString(val));
            } else {
                stack.push(x);
            }
        }

        return Integer.parseInt(stack.pop());
    }
    public boolean isOperator(String x) {
        return x.equals("+") || x.equals("-") || x.equals("/") || x.equals("*");
    }
    public int eval(int x, int y, String operation) {
        return switch (operation) {
            case "+" -> x + y;
            case "-" -> x - y;
            case "*" -> x* y;
            case "/" -> x / y;
            default -> 0;
        };
    }
}
