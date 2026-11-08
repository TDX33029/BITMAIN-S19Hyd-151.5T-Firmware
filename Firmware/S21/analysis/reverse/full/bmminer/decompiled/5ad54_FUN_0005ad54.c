// FUN_0005ad54 @ 0005ad54  size=160  callers=1
// program: bmminer


undefined4 FUN_0005ad54(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char acStack_2008 [8192];
  
  if (4 < DAT_000be63c) {
    snprintf(acStack_2008,0x2000,"[DEBUG] Board init, is_power_off = %d.\n",param_1);
    FUN_0004948c(4,acStack_2008,0);
  }
  uVar3 = 0;
  do {
    iVar1 = FUN_0002a6f0(uVar3);
    if (iVar1 != 0) {
      thunk_FUN_00083540(uVar3 & 0xff);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  FUN_00050940();
  uVar2 = FUN_00054a78();
  FUN_0004bf68(10);
  FUN_00041458();
  FUN_0004bf68(10);
  return uVar2;
}

