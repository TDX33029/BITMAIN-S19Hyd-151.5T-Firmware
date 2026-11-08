// FUN_0174a450 @ 0174a450 size=560 calls_out=13 calls_in=3
// strings: 

undefined8 FUN_0174a450(char *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_78;
  int iStack_74;
  undefined1 auStack_6c [32];
  undefined1 auStack_4c [48];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  if (param_1 == (char *)0x0) goto LAB_0174a678;
  local_78 = 0;
  iStack_74 = 0;
  iVar1 = FUN_017826a8(&local_78);
  if ((iVar1 == 1) &&
     (*(int *)(param_1 + 0x134) != iStack_74 || *(int *)(param_1 + 0x130) != local_78)) {
    *(int *)(param_1 + 0x130) = local_78;
    *(int *)(param_1 + 0x134) = iStack_74;
LAB_0174a59c:
    if (*param_1 == '\x01') {
      iVar1 = *(int *)(param_1 + 0x13c);
      if (iVar1 != 0) {
        iVar3 = 3;
        do {
          iVar1 = FUN_0178cf28(iVar1,auStack_4c,0x30);
          if (iVar1 == 0x30) goto LAB_0174a5d8;
          FUN_0178d588(*(undefined4 *)(param_1 + 0x13c));
          param_1[0x13c] = '\0';
          param_1[0x13d] = '\0';
          param_1[0x13e] = '\0';
          param_1[0x13f] = '\0';
          iVar1 = FUN_0178d504(0,0x20);
          *(int *)(param_1 + 0x13c) = iVar1;
        } while ((iVar1 != 0) && (iVar3 = iVar3 + -1, iVar3 != 0));
      }
      goto LAB_0174a678;
    }
    FUN_01781f64(&DAT_018de6b4);
    FUN_0174a450(DAT_018de6dc,auStack_4c);
    FUN_01781fc4(&DAT_018de6b4);
LAB_0174a5d8:
    iVar1 = FUN_0174978c(param_1 + 8,auStack_4c,0);
    if (iVar1 != 1) goto LAB_0174a678;
    FUN_0177aaa0(auStack_4c,0x30);
    uVar2 = *(uint *)(param_1 + 0x128);
    *(uint *)(param_1 + 0x128) = uVar2 + 1;
    *(uint *)(param_1 + 300) = *(int *)(param_1 + 300) + (uint)(0xfffffffe < uVar2);
  }
  else if (*(uint *)(param_1 + 0x124) <= *(uint *)(param_1 + 0x11c) &&
           (uint)(*(uint *)(param_1 + 0x118) <= *(uint *)(param_1 + 0x120)) <=
           *(uint *)(param_1 + 0x124) - *(uint *)(param_1 + 0x11c)) goto LAB_0174a59c;
  if (*param_1 == '\0') {
    if (param_1[0x138] == '\x01') {
      uVar4 = 0;
    }
    else {
      FUN_0177e914(auStack_6c,0x20);
      uVar4 = 0x20;
    }
  }
  else {
    uVar4 = 0;
  }
  iVar1 = FUN_01749e98(param_1 + 8,param_2,0x30,auStack_6c,uVar4);
  if (iVar1 != 0) {
    FUN_0177aaa0(auStack_6c,0x20);
    if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return 0;
  }
LAB_0174a678:
                    /* WARNING: Subroutine does not return */
  FUN_016d2c24();
}

