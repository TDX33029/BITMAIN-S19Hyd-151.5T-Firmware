// FUN_005d022c @ 005d022c size=120 calls_out=4 calls_in=0
// strings: [internal

void FUN_005d022c(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined1 local_1c;
  
  iVar2 = *param_2;
  iVar1 = param_2[1];
  iVar3 = param_2[2];
  *param_2 = -0x80000000;
  if (iVar2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("[internal",0x2d,&DAT_01d29564);
  }
  FUN_019ec5bc();
  local_1c = 1;
  local_20 = 0x1ff;
  FUN_019a4dfc(param_1,&local_20,iVar1,iVar3);
  FUN_019bb7e0(iVar2,iVar1);
  return;
}

