// FUN_016f3ff8 @ 016f3ff8 size=300 calls_out=5 calls_in=1
// strings: 

void FUN_016f3ff8(undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_28;
  short *psStack_24;
  int iStack_20;
  char local_1c;
  undefined1 local_1b;
  int local_18;
  undefined4 local_14;
  
  FUN_016f413c(&local_28);
  if (iStack_20 == 2) {
    iVar4 = 2;
    if (*psStack_24 != 0x6663) {
      sVar1 = *psStack_24;
      sVar2 = 0x6373;
      bVar5 = sVar1 != 0x6373;
      if (bVar5) {
        sVar1 = *psStack_24;
        sVar2 = 0x636c;
      }
      if (bVar5 && sVar1 != sVar2) goto LAB_016f4048;
    }
LAB_016f4080:
    FUN_016f4728(&local_1c,psStack_24,iVar4);
    if (local_1c == '\x01') goto LAB_016f4098;
    if (local_18 != 0) {
      uVar3 = 1;
LAB_016f40c0:
      *param_1 = uVar3;
      param_1[1] = local_18;
      param_1[2] = local_14;
      goto LAB_016f40cc;
    }
    FUN_016f46a0(&local_1c,psStack_24,iStack_20);
    if (local_1c == '\x01') goto LAB_016f4098;
    if (local_18 != 0) {
      uVar3 = 2;
      goto LAB_016f40c0;
    }
    *param_1 = 4;
    local_1b = 0;
  }
  else {
LAB_016f4048:
    FUN_016f4428(&local_1c,psStack_24,iStack_20);
    if (local_1c != '\x01') {
      iVar4 = iStack_20;
      if (local_18 == 0) goto LAB_016f4080;
      uVar3 = 0;
      goto LAB_016f40c0;
    }
LAB_016f4098:
    *param_1 = 4;
  }
  *(undefined1 *)(param_1 + 1) = local_1b;
LAB_016f40cc:
  FUN_0134bd64(local_28,psStack_24);
  return;
}

