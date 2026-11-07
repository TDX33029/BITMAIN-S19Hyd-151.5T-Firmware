// FUN_01749d74 @ 01749d74 size=268 calls_out=7 calls_in=0
// strings: 

void FUN_01749d74(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_4c [48];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  FUN_01781f64(&DAT_018de6b4,param_2,&PTR_018bc3f4,0);
  pcVar1 = DAT_018de6dc;
  if (DAT_018de6dc == (char *)0x0) {
    if (local_1c != DAT_018ddaf8) {
LAB_01749e78:
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
LAB_01749e44:
    FUN_01781fc4(&DAT_018de6b4);
    return;
  }
  if (*DAT_018de6dc == '\x01') {
    FUN_0177e960(auStack_4c,0x30);
    iVar2 = FUN_0174978c(pcVar1 + 8,auStack_4c,0);
    if (iVar2 == 1) {
      FUN_0177aaa0(auStack_4c,0x30);
      uVar3 = *(uint *)(pcVar1 + 0x128);
      *(uint *)(pcVar1 + 0x128) = uVar3 + 1;
      *(uint *)(pcVar1 + 300) = *(int *)(pcVar1 + 300) + (uint)(0xfffffffe < uVar3);
      if (local_1c != DAT_018ddaf8) goto LAB_01749e78;
      goto LAB_01749e44;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_016d2c24();
}

