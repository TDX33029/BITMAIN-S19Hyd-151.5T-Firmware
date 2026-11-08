// FUN_01609718 @ 01609718 size=452 calls_out=8 calls_in=8
// strings: 

void FUN_01609718(uint *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_100;
  uint local_fc;
  undefined2 local_90 [56];
  
  FUN_01609904(&local_100,1,1);
  if (((char)local_100 == '\x04') || ((local_100 & 0xff) == 4)) {
    if (local_fc == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00570c98,8,&DAT_01d05e20);
    }
    FUN_01bed93e((uint)local_90 | 2,0,0x6c);
    pcVar5 = (char *)((int)param_2 + 6);
    iVar1 = *param_2;
    iVar8 = 2;
    local_90[0] = 1;
    uVar7 = iVar1 - 2;
    if (uVar7 != 0) {
      if (*pcVar5 == '\0') {
        if (0x6c < uVar7) {
          iVar2 = 1;
          puVar4 = &DAT_01d277c4;
          goto LAB_016098d0;
        }
        if (*pcVar5 != '\0') goto LAB_0160980c;
        pcVar5 = (char *)((int)param_2 + 7);
        iVar2 = 1;
      }
      else {
        uVar7 = iVar1 - 3;
        iVar2 = 0;
        if (0x6c < uVar7) {
          puVar4 = &DAT_01d277d4;
LAB_016098d0:
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(iVar2,uVar7,0x6c,puVar4);
        }
      }
      iVar1 = iVar1 + -3;
      FUN_01bed4e2(((uint)local_90 | 2) + iVar2,pcVar5,iVar1);
      if (iVar1 != 0) {
        iVar8 = 3;
        if (*pcVar5 == '\0') {
          iVar8 = 2;
        }
        iVar8 = iVar8 + iVar1;
      }
    }
LAB_0160980c:
    FUN_01bed4e2(&local_100,local_90,0x6e);
    FUN_01bed4e2(local_90,&local_100,0x6e);
    iVar1 = FUN_01be71a6(local_fc,local_90,iVar8);
    if (iVar1 < 0) {
      puVar3 = (uint *)FUN_01be3244();
      uVar6 = *puVar3;
      if (uVar6 != 0x73) {
        FUN_01bf01d6(local_fc);
        uVar7 = 0;
        local_100 = 0;
        local_fc = uVar6;
        goto LAB_0160987c;
      }
    }
    param_1[1] = local_fc;
    *(undefined1 *)param_1 = 4;
  }
  else {
    uVar7 = local_100 >> 8;
LAB_0160987c:
    *param_1 = local_100 & 0xff | uVar7 << 8;
    param_1[1] = local_fc;
  }
  return;
}

