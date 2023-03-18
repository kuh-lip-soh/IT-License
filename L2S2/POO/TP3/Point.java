public class Point
{
    double x, y;
    Point(double x,double y)
    {
        this.x=x;
        this.y=y;
    }
    Point(Point p)
    {
        this.x=p.x;
        this.y=p.y;
    }
    static double Dist(double x1, double y1, double x2, double y2)
    {
        return Math.sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    }
}
