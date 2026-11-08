// FUN_013de7b8 @ 013de7b8 size=340 calls_out=4 calls_in=4
// strings: 

void FUN_013de7b8(uint *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint local_50;
  uint local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar4 = 0;
  iVar1 = param_3 * 0x18;
  if (0x5555555 < param_3) {
LAB_013de7e4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar1);
  }
  if (iVar1 == 0) {
    local_4c = 4;
    local_50 = 0;
  }
  else {
    uVar4 = 4;
    local_4c = FUN_01298504(iVar1,4);
    if (local_4c == 0) goto LAB_013de7e4;
    local_50 = param_3;
    if (param_3 != 0) {
      iVar5 = 0;
      uVar6 = 0;
      puVar7 = param_2;
      do {
        if (iVar1 == iVar5) break;
        local_40 = *puVar7;
        cVar2 = *(char *)(puVar7 + 1);
        if (cVar2 != '\x01') {
          FUN_01bed4e2((uint)&local_40 | 5,(int)param_2 + iVar5 + 5,0x13);
        }
        else {
          uVar3 = *(undefined2 *)((int)param_2 + iVar5 + 6);
          FUN_015e8ad4(&uStack_38,*(undefined4 *)((int)param_2 + iVar5 + 0xc),
                       *(undefined4 *)((int)param_2 + iVar5 + 0x10));
          local_3c = CONCAT22(uVar3,(undefined2)local_3c);
        }
        local_3c = CONCAT31(local_3c._1_3_,cVar2 == '\x01');
        puVar8 = (undefined4 *)(local_4c + iVar5);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 6;
        iVar5 = iVar5 + 0x18;
        *puVar8 = local_40;
        puVar8[1] = local_3c;
        puVar8[2] = uStack_38;
        puVar8[3] = uStack_34;
        puVar8[4] = uStack_30;
        puVar8[5] = uStack_2c;
      } while (param_3 != uVar6);
    }
  }
  *param_1 = local_50;
  param_1[1] = local_4c;
  param_1[2] = param_3;
  return;
}

