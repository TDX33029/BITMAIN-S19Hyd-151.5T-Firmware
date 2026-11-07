// FUN_01b51a04 @ 01b51a04 size=452 calls_out=11 calls_in=3
// strings: 

undefined8 FUN_01b51a04(char *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_80;
  int iStack_7c;
  undefined1 auStack_74 [32];
  undefined1 auStack_54 [48];
  int local_24;
  
  local_24 = DAT_01d53560;
  if (param_1 == (char *)0x0) goto LAB_01b51a40;
  local_80 = 0;
  iStack_7c = 0;
  iVar1 = FUN_01b70eec(&local_80);
  if ((iVar1 == 1) &&
     (*(int *)(param_1 + 0x134) != iStack_7c || *(int *)(param_1 + 0x130) != local_80)) {
    *(int *)(param_1 + 0x130) = local_80;
    *(int *)(param_1 + 0x134) = iStack_7c;
LAB_01b51aa0:
    if (*param_1 == '\x01') {
      FUN_01b2071c(param_1,auStack_54);
    }
    else {
      FUN_01b7079c(&DAT_01d51bbc);
      FUN_01b51a04(DAT_01d51be4,auStack_54);
      FUN_01b707fc(&DAT_01d51bbc);
    }
    iVar1 = FUN_01b51558(param_1 + 8,auStack_54,0);
    if (iVar1 != 1) goto LAB_01b51a40;
    FUN_01b6b174(auStack_54,0x30);
    uVar2 = *(uint *)(param_1 + 0x128);
    *(uint *)(param_1 + 0x128) = uVar2 + 1;
    *(uint *)(param_1 + 300) = *(int *)(param_1 + 300) + (uint)(0xfffffffe < uVar2);
  }
  else if (*(uint *)(param_1 + 0x124) <= *(uint *)(param_1 + 0x11c) &&
           (uint)(*(uint *)(param_1 + 0x118) <= *(uint *)(param_1 + 0x120)) <=
           *(uint *)(param_1 + 0x124) - *(uint *)(param_1 + 0x11c)) goto LAB_01b51aa0;
  if (*param_1 == '\0') {
    uVar3 = 0;
    if (param_1[0x138] != '\x01') {
      FUN_01b6dcc4(auStack_74,0x20);
      uVar3 = 0x20;
    }
  }
  else {
    uVar3 = 0;
  }
  iVar1 = FUN_01b51818(param_1 + 8,param_2,0x30,auStack_74,uVar3);
  if (iVar1 != 0) {
    FUN_01b6b174(auStack_74,0x20);
    if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
      FUN_01be31f4();
    }
    return 0;
  }
LAB_01b51a40:
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0();
}

