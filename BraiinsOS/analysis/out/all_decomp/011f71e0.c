// FUN_011f71e0 @ 011f71e0 size=60 calls_out=1 calls_in=0
// strings: 

undefined8 FUN_011f71e0(int param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (*param_2 == '\x03') {
    uVar1 = FUN_00f5dd74(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    uVar2 = *(uint *)(param_1 + 0xc);
    bVar3 = uVar1 <= *(uint *)(param_1 + 8);
    return CONCAT44(uVar2 - !bVar3,(uint)(uVar2 != 0 || uVar2 < bVar3));
  }
  return CONCAT44(param_2,1);
}

