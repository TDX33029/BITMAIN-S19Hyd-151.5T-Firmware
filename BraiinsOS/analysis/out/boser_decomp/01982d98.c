// FUN_01982d98 @ 01982d98 size=380 calls_out=7 calls_in=11
// strings: 

uint FUN_01982d98(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int local_288;
  uint local_284;
  undefined4 *local_280 [4];
  uint local_270;
  undefined1 auStack_218 [388];
  int local_94;
  undefined4 *local_90;
  undefined1 auStack_88 [104];
  
  if ((uint)param_2 >> 7 < 3) {
    FUN_01bed4e2(auStack_218,param_1,param_2);
    auStack_218[(int)param_2] = 0;
    FUN_012fbc58(&local_94,auStack_218,(int)param_2 + 1);
    if (local_94 == 1) {
      local_280[0] = &DAT_01d27a70;
      local_284 = 2;
    }
    else {
      FUN_01bed93e(auStack_88,0,0x68);
      iVar1 = FUN_01bf065a(local_90,auStack_88);
      if (iVar1 != -1) {
        FUN_01bed4e2(local_280,auStack_88,0x68);
        goto LAB_01982ea4;
      }
      local_280[0] = (undefined4 *)FUN_01be3244();
      local_280[0] = (undefined4 *)*local_280[0];
      local_284 = local_284 & 0xffffff00;
    }
  }
  else {
    FUN_0199f70c(&local_288,param_1,param_2,FUN_0199f694);
    local_90 = param_2;
    if (local_288 == 0) {
LAB_01982ea4:
      uVar4 = 4;
      puVar3 = local_90;
      if ((local_270 & 0xf000) == 0x8000) {
        uVar4 = 0x104;
      }
      goto LAB_01982eb8;
    }
  }
  puVar3 = local_280[0];
  uVar4 = local_284;
LAB_01982eb8:
  if ((uVar4 & 0xff) == 3) {
    uVar5 = *puVar3;
    puVar6 = (undefined4 *)puVar3[1];
    pcVar2 = (code *)*puVar6;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_01be4678(uVar5);
    }
    thunk_FUN_01be4678(puVar3);
  }
  return (uint)((uVar4 & 0xff) == 4) & (uVar4 & 0x100) >> 8;
}

