// FUN_019ad8f0 @ 019ad8f0 size=436 calls_out=8 calls_in=1
// strings: 

void FUN_019ad8f0(uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_288;
  uint local_284;
  undefined4 *local_280 [26];
  undefined1 auStack_218 [388];
  int local_94;
  undefined4 local_90;
  undefined1 auStack_88 [104];
  
  if (param_3 >> 7 < 3) {
    FUN_01bed4e2(auStack_218,param_2,param_3);
    auStack_218[param_3] = 0;
    FUN_012fbc58(&local_94,auStack_218,param_3 + 1);
    if (local_94 == 1) {
      local_280[0] = &DAT_01d27a70;
      local_284 = 2;
    }
    else {
      FUN_01bed93e(auStack_88,0,0x68);
      iVar4 = FUN_01bf065a(local_90,auStack_88);
      if (iVar4 != -1) {
        FUN_01bed4e2(local_280,auStack_88,0x68);
        goto LAB_019ad9ac;
      }
      local_280[0] = (undefined4 *)FUN_01be3244();
      local_280[0] = (undefined4 *)*local_280[0];
      local_284 = local_284 & 0xffffff00;
    }
  }
  else {
    FUN_0199f70c(&local_288,param_2,param_3,FUN_0199f694);
    if (local_288 == 0) {
LAB_019ad9ac:
      *(undefined2 *)param_1 = 0x104;
      return;
    }
  }
  puVar2 = local_280[0];
  uVar1 = local_284;
  uVar7 = local_284 & 0xff;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar7) {
  case 0:
    cVar3 = FUN_019a0d94(local_280[0]);
    break;
  case 1:
    if ((local_284 >> 8 & 0xff) == 0) goto LAB_019ada44;
    goto LAB_019ada10;
  default:
    cVar3 = *(char *)(local_280[0] + 2);
  }
  if (cVar3 == '\0') {
LAB_019ada44:
    *(undefined2 *)param_1 = 4;
    if (uVar7 == 3) {
      uVar6 = *puVar2;
      puVar8 = (undefined4 *)puVar2[1];
      pcVar5 = (code *)*puVar8;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar6);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_01be4678(uVar6);
      }
      thunk_FUN_01be4678(puVar2);
      return;
    }
  }
  else {
LAB_019ada10:
    *param_1 = uVar1;
    param_1[1] = (uint)puVar2;
  }
  return;
}

