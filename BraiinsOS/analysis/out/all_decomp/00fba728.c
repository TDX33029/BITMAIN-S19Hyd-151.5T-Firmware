// FUN_00fba728 @ 00fba728 size=132 calls_out=0 calls_in=1
// strings: 

void FUN_00fba728(undefined4 *param_1,byte *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  uVar1 = *(ushort *)(param_1 + 1);
  uVar2 = (uint)uVar1;
  if (*(char *)(*piVar3 + 10) == '\0') {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uVar2 = (uint)*(ushort *)((int)piVar3 + ((uint)*param_2 ^ (uVar2 & 0xffff) >> 8) * 2 + 4) ^
              uVar2 << 8;
      uVar1 = (ushort)uVar2;
      param_2 = param_2 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uVar2 = (uint)*(ushort *)((int)piVar3 + ((*param_2 ^ uVar2) & 0xff) * 2 + 4) ^ uVar2 >> 8;
      uVar1 = (ushort)uVar2;
      param_2 = param_2 + 1;
    }
  }
  *(ushort *)(param_1 + 1) = uVar1;
  return;
}

