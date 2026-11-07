// FUN_01428cf8 @ 01428cf8 size=700 calls_out=8 calls_in=3
// strings: 

void FUN_01428cf8(undefined4 param_1,int param_2)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int local_68;
  int iStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int local_50;
  int local_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  char local_28;
  
  iVar6 = 0;
  do {
    FUN_0141d7f4(&local_38,param_1,&DAT_01d4e8b8 + iVar6);
    if (local_28 != '\x02') {
      (**(code **)(local_38 + 0x10))(&uStack_2c,local_34,local_30);
    }
    iVar6 = iVar6 + 0x10;
  } while (iVar6 != 0x40);
  if (param_2 != 0) {
    local_38 = 0;
    local_34 = 0x43;
    local_30 = 0;
    uStack_2c = 0;
    iVar6 = FUN_0160ab20(param_1,&local_38);
    if ((iVar6 == 0) ||
       ((*(int *)(iVar6 + 8) == 8 &&
        (iVar6 = thunk_FUN_01bed842(*(undefined4 *)(iVar6 + 4),&DAT_0056fb90,8), iVar6 == 0))))
    goto LAB_01428df8;
  }
  local_50 = 0;
  local_4c = 0x43;
  local_48 = 0;
  uStack_44 = 0;
  FUN_0141dc00(&local_38,param_1);
  if (local_28 != '\x02') {
    (**(code **)(local_38 + 0x10))(&uStack_2c,local_34,local_30);
  }
LAB_01428df8:
  local_38 = 0;
  local_34 = 0x14;
  local_30 = 0;
  uStack_2c = 0;
  FUN_0141dc00(&local_68,param_1,&local_38);
  if ((char)local_58 != '\x02') {
    local_50 = local_68;
    local_4c = iStack_64;
    local_48 = uStack_60;
    uStack_44 = uStack_5c;
    uStack_40 = local_58;
    uVar3 = 0;
    while (uStack_60 != uVar3) {
      pbVar1 = (byte *)(iStack_64 + uVar3);
      uVar3 = uVar3 + 1;
      if ((*pbVar1 != 9) && (0x5e < *pbVar1 - 0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_38,&DAT_01cf4b70,&DAT_01cf4ba4);
      }
    }
    uVar3 = 0;
    uVar7 = 0;
    do {
      bVar2 = true;
      do {
        if (uStack_60 < uVar3) {
LAB_01428f48:
          uVar5 = uStack_60;
          uVar4 = uVar7;
          goto LAB_01428f4c;
        }
        uVar5 = uStack_60 - uVar3;
        if (uVar5 < 8) {
          uVar4 = 0;
          if (uVar5 == 0) {
            uVar8 = 0;
          }
          else {
            do {
              if (*(char *)(iStack_64 + uVar3 + uVar4) == ',') {
                uVar8 = CONCAT44(uVar4,1);
                goto LAB_01428f08;
              }
              uVar4 = uVar4 + 1;
            } while (uVar5 != uVar4);
            uVar8 = (ulonglong)uVar5 << 0x20;
          }
        }
        else {
          uVar8 = FUN_01307168(0x2c,iStack_64 + uVar3);
        }
LAB_01428f08:
        if ((uVar8 & 1) == 0) {
          uVar3 = uStack_60;
          goto LAB_01428f48;
        }
        uVar5 = uVar3 + (int)(uVar8 >> 0x20);
        uVar3 = uVar5 + 1;
      } while ((uStack_60 <= uVar5) || (*(char *)(iStack_64 + uVar5) != ','));
      bVar2 = false;
      uVar4 = uVar3;
LAB_01428f4c:
      uVar9 = FUN_013245a0(iStack_64 + uVar7,uVar5 - uVar7);
      FUN_0141de40(&local_38,param_1,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
      if (local_28 != '\x02') {
        (**(code **)(local_38 + 0x10))(&uStack_2c,local_34,local_30);
      }
      uVar7 = uVar4;
    } while (!bVar2);
    (**(code **)(local_50 + 0x10))(&uStack_44,local_4c,local_48);
  }
  return;
}

