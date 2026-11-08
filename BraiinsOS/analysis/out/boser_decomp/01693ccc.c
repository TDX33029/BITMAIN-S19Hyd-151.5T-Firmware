// FUN_01693ccc @ 01693ccc size=68 calls_out=0 calls_in=1
// strings: 

longlong FUN_01693ccc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = 0;
  if (iVar2 == 7 || iVar2 == 6) {
    if (param_1[3] != 1) {
      return (ulonglong)(uint)param_1[3] << 0x20;
    }
    iVar2 = *(int *)param_1[2];
  }
  else {
    if (iVar2 != 0) goto LAB_01693cfc;
    iVar2 = param_1[1];
  }
  uVar1 = 1;
LAB_01693cfc:
  return CONCAT44(iVar2,uVar1);
}

