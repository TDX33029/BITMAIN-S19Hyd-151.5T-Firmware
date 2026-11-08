// FUN_00f25b04 @ 00f25b04 size=556 calls_out=7 calls_in=7
// strings: 

void FUN_00f25b04(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 **ppuVar2;
  undefined4 uVar3;
  undefined4 **ppuVar4;
  undefined4 **ppuVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 **local_68;
  undefined4 **local_64;
  undefined4 **local_60;
  undefined4 *local_5c;
  int local_58;
  int local_54;
  undefined4 **local_40;
  undefined4 **local_3c;
  undefined4 **local_38;
  undefined2 local_24;
  undefined1 local_22;
  
  FUN_019afae4(&local_68);
  ppuVar2 = local_60;
  ppuVar5 = local_64;
  local_58 = 7;
  iVar1 = 0;
  do {
    local_5c = param_4;
    if (*(char *)((int)param_4 - iVar1) == '/') {
      local_40 = &local_5c;
      local_3c = (undefined4 **)&DAT_0199ef54;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0058fc27,&local_40,&DAT_01d27bfc);
    }
    bVar7 = iVar1 != -6;
    iVar1 = iVar1 + -1;
  } while (bVar7);
  if (local_60 == (undefined4 **)0x0) {
    local_22 = false;
  }
  else {
    local_22 = *(char *)local_64 == '/';
  }
  local_38 = (undefined4 **)CONCAT31(local_38._1_3_,6);
  local_3c = local_60;
  local_40 = local_64;
  local_24 = 0x201;
  FUN_01982524(&local_5c,&local_40);
  if ((char)local_5c == '\t') {
    bVar7 = ppuVar5 <= (undefined4 **)(local_58 + local_54);
    ppuVar4 = (undefined4 **)((local_58 + local_54) - (int)ppuVar5);
    if (ppuVar4 != (undefined4 **)0x0) {
      bVar7 = ppuVar2 <= ppuVar4;
    }
    if ((ppuVar4 != (undefined4 **)0x0 && ppuVar4 != ppuVar2) &&
       ((bVar7 || ((0x7fffffff < (uint)(int)((char *)((int)ppuVar5 + (int)ppuVar4))[-1] &&
                   (*(char *)((int)ppuVar5 + (int)ppuVar4) < '\0')))))) {
      FUN_0199ef60(ppuVar5,ppuVar2,ppuVar4);
    }
    if (ppuVar4 <= ppuVar2) {
      ppuVar2 = ppuVar4;
      local_60 = ppuVar4;
    }
    if ((uint)((int)local_68 - (int)ppuVar2) < 8) {
      if ((undefined4 **)0xfffffff7 < ppuVar2) {
        ppuVar2 = (undefined4 **)0x0;
LAB_00f25d24:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(ppuVar2,local_68);
      }
      FUN_0197ad30(&local_40,local_68,ppuVar5,ppuVar2 + 2,1,1);
      if (local_40 == (undefined4 **)&DAT_00000001) {
        ppuVar2 = local_3c;
        local_68 = local_38;
        goto LAB_00f25d24;
      }
      local_64 = local_3c;
      ppuVar5 = local_3c;
      local_68 = ppuVar2 + 2;
    }
    else if (local_68 == ppuVar2) {
      FUN_0197ac30(&local_68,ppuVar2,1,1,1);
      ppuVar2 = local_60;
      ppuVar5 = local_64;
    }
    else {
    }
    local_60 = (undefined4 **)((int)ppuVar2 + 1);
    *(char *)((int)ppuVar5 + (int)ppuVar2) = '.';
    if ((uint)((int)local_68 - (int)local_60) < 7) {
      FUN_0197ac30(&local_68,local_60,7,1,1);
      ppuVar5 = local_64;
    }
    uVar3 = *(undefined4 *)((int)param_4 + 3);
    pcVar6 = (char *)((int)ppuVar5 + (int)local_60);
    *(undefined4 *)pcVar6 = *param_4;
    local_60 = (undefined4 **)((int)local_60 + 7);
    *(undefined4 *)(pcVar6 + 3) = uVar3;
  }
  *param_1 = local_68;
  param_1[1] = local_64;
  param_1[2] = local_60;
  return;
}

