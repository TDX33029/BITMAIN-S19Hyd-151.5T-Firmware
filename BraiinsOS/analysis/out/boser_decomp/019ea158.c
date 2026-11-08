// FUN_019ea158 @ 019ea158 size=684 calls_out=6 calls_in=2
// strings: signal driver gone

void FUN_019ea158(undefined4 *param_1,undefined4 ***param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  undefined *puVar8;
  undefined4 ****local_48;
  undefined4 ***local_44;
  undefined4 ***local_40;
  undefined *local_3c;
  undefined4 ****local_38;
  undefined4 ***local_34;
  undefined4 ****local_30;
  undefined4 ***local_2c;
  undefined **local_28;
  int local_24;
  undefined4 ****local_1c;
  
  local_40 = param_2;
  if (0 < (int)param_2) {
    iVar3 = 0;
    do {
      if (iVar3 == 0x14) {
        iVar3 = 0x14;
        if (param_3 != (int *)&DAT_ffffffff) {
          iVar3 = *param_3;
        }
        if (!(param_3 != (int *)&DAT_ffffffff && iVar3 != 0)) {
          FUN_019a18a8(&local_30,0x28,"signal driver gone",0x12);
          if (((char)local_30 != '\x04') && (((uint)local_30 & 0xff) != 4)) {
            local_48 = local_30;
            local_44 = local_2c;
            goto LAB_019ea1dc;
          }
        }
        DataMemoryBarrier(0xb);
        if (DAT_01d50444 != 0) {
          FUN_019e9c64();
        }
        local_3c = &DAT_01d50434;
        if ((int)local_40 - 1U < DAT_01d50440) {
          iVar3 = DAT_01d5043c + ((int)local_40 - 1U) * 0x10;
          local_38 = (undefined4 ****)CONCAT31(local_38._1_3_,4);
          DataMemoryBarrier(0xb);
          if (*(int *)(iVar3 + 8) != 0) {
            local_28 = &local_3c;
            local_2c = &local_40;
            local_30 = &local_38;
            local_1c = &local_30;
            local_24 = iVar3;
            FUN_019a768c(iVar3 + 8,0,&local_1c,&DAT_01d29400,&DAT_01d29444);
          }
          if (((uint)local_38 & 0xff) != 4) {
            local_48 = local_38;
            local_44 = local_34;
            goto LAB_019ea1dc;
          }
          if (*(char *)(iVar3 + 0xc) != '\0') {
            local_48 = (undefined4 ****)CONCAT31(local_48._1_3_,4);
            goto LAB_019ea1dc;
          }
          uVar5 = 0x21;
          puVar8 = &DAT_00528c15;
        }
        else {
          uVar5 = 0x10;
          puVar8 = &DAT_005684e8;
        }
        FUN_019a18a8(&local_48,0x28,puVar8,uVar5);
        goto LAB_019ea1dc;
      }
      piVar4 = (int *)((int)&DAT_00528bb8 + iVar3);
      iVar3 = iVar3 + 4;
    } while ((undefined4 ***)*piVar4 != param_2);
  }
  local_34 = (undefined4 ***)FUN_012fce60;
  local_38 = &local_40;
  FUN_00664898(&local_30,&DAT_005aac87,&local_38);
  FUN_019ecaa4(&local_48,0x28,&local_30);
LAB_019ea1dc:
  if (((char)local_48 == '\x04') || (((uint)local_48 & 0xff) == 4)) {
    DataMemoryBarrier(0xb);
    if (DAT_01d50444 != 0) {
      FUN_019e9c64();
    }
    local_38 = (undefined4 ****)param_2;
    if (DAT_01d50440 <= (int)param_2 - 1U) {
      local_30 = &local_38;
      local_2c = (undefined4 ***)FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005b67fa,&local_30,&DAT_01d2904c);
    }
    piVar4 = *(int **)(DAT_01d5043c + ((int)param_2 - 1U) * 0x10);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x19ea400);
      (*pcVar1)();
    }
    uVar6 = piVar4[0x27];
    piVar7 = piVar4 + 0x28;
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = *piVar7 + 1;
    param_1[1] = piVar4;
    param_1[2] = uVar6 & 0xfffffffe;
    uVar5 = 0;
  }
  else {
    param_1[1] = local_48;
    param_1[2] = local_44;
    uVar5 = 1;
  }
  *param_1 = uVar5;
  return;
}

