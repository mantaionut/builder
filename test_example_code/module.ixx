export module testModule;

import <torch/torch.h>;

export void test()
{
    TORCH_WARN("Simple test passed!");
    torch::Tensor tensor1 = torch::rand({ 2, 3 });
}