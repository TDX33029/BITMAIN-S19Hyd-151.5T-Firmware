// FUN_013db6d4 @ 013db6d4 size=112 calls_out=0 calls_in=1
// strings: 

int FUN_013db6d4(ushort param_1,ushort param_2,ushort param_3,ushort param_4)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = param_1;
  if (((6 < param_1) && (uVar1 = param_2, param_1 != 7)) && (param_1 == 8)) {
    uVar1 = 0xffff;
  }
  uVar2 = param_3;
  if (((6 < param_3) && (uVar2 = param_4, param_3 != 9)) && (param_3 == 8)) {
    uVar2 = 0xffff;
  }
  return (uint)(uVar1 >= uVar2 && uVar1 != uVar2) - (uint)(uVar1 < uVar2);
}

