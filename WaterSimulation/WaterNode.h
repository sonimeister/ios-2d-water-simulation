static const NSInteger kColumnCount = 80;

typedef struct Vertex {
    GLushort x;
    GLushort y;
} Vertex;

typedef struct Color {
    ccColor4B color;
} Color;

@interface WaterNode : CCNode {
@private
    NSMutableArray *_columns;
    CGFloat _scale;
    Vertex _vertexArray[kColumnCount * 2];
    Color _colorArray[kColumnCount * 2];
}

- (void)splash:(CGFloat)index :(CGFloat)speed;

@end
