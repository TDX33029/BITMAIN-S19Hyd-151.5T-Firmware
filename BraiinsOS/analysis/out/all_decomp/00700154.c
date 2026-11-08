// FUN_00700154 @ 00700154 size=100 calls_out=4 calls_in=0
// strings: 

void FUN_00700154(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [80];
  
  piVar1 = (int *)*param_1;
  iVar2 = *piVar1;
  iVar3 = piVar1[1];
  *piVar1 = 0;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac9c8);
  }
  FUN_007001bc(auStack_68,iVar2);
  FUN_010e0e94(auStack_88,auStack_68);
  FUN_016dd1aa(iVar3,auStack_88,0x20);
  return;
}

