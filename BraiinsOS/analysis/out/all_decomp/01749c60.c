// FUN_01749c60 @ 01749c60 size=256 calls_out=6 calls_in=0
// strings: 

undefined8 FUN_01749c60(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 auStack_44 [48];
  int local_14;
  
  local_14 = DAT_018ddaf8;
  if (param_1 != (undefined4 *)0x0) {
    FUN_01781ff4(&DAT_018de6d4,FUN_01749d74,&PTR_018bc3f4,0);
    pcVar3 = (char *)*param_1;
    if (pcVar3 == (char *)0x0) {
LAB_01749d14:
      if (local_14 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return 0;
    }
    if (*pcVar3 != '\x01') {
      FUN_0177e960(auStack_44,0x30);
      iVar1 = FUN_0174978c(pcVar3 + 8,auStack_44,0);
      if (iVar1 == 1) {
        FUN_0177aaa0(auStack_44,0x30);
        uVar2 = *(uint *)(pcVar3 + 0x128);
        *(uint *)(pcVar3 + 0x128) = uVar2 + 1;
        *(uint *)(pcVar3 + 300) = *(int *)(pcVar3 + 300) + (uint)(0xfffffffe < uVar2);
        goto LAB_01749d14;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_016d2c24();
}

