// FUN_01757774 @ 01757774 size=152 calls_out=1 calls_in=17
// strings: 

undefined8 FUN_01757774(int param_1,uint param_2)

{
  if ((param_1 == 0) || ((param_2 & 0xffffffdf) != 0x88)) {
    return 0;
  }
  FUN_016dd606(param_1,0,200);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(uint *)(param_1 + 200) = param_2;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined2 *)(param_1 + 0x17c) = 0x1f;
  return 1;
}

