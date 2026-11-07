// FUN_01b51668 @ 01b51668 size=208 calls_out=5 calls_in=2
// strings: 

undefined8 FUN_01b51668(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_44 [48];
  int local_14;
  
  local_14 = DAT_01d53560;
  FUN_01b6dd10(auStack_44,0x30,&PTR_01d3b2b0,0);
  iVar1 = FUN_01b51558(param_1 + 8,auStack_44,0);
  if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_01be32a0();
  }
  FUN_01b6b174(auStack_44,0x30);
  uVar2 = *(uint *)(param_1 + 0x128);
  *(uint *)(param_1 + 0x128) = uVar2 + 1;
  *(uint *)(param_1 + 300) = *(int *)(param_1 + 300) + (uint)(0xfffffffe < uVar2);
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

