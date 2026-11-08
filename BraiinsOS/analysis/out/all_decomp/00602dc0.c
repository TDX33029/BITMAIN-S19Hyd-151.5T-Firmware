// FUN_00602dc0 @ 00602dc0 size=1408 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_00602dc0(uint *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_58;
  undefined1 auStack_54 [20];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined3 uStack_2c;
  
  uVar7 = param_1[3];
  uVar5 = 0;
  do {
    uVar1 = uVar5;
    if (uVar5 < 0xd) {
      uVar1 = 0xc;
    }
    do {
      uVar6 = uVar5;
      if (uVar1 == uVar6) goto LAB_00602e3c;
      uVar5 = uVar6 + 1;
    } while (((ushort)uVar7 >> (uVar6 & 0xff) & 1) == 0);
    iVar2 = (**(code **)(param_3 + 0xc))
                      (param_2,(&DAT_01857568)[uVar6 * 4],(&DAT_0185756c)[uVar6 * 4]);
  } while (iVar2 == 0);
  uVar3 = 1;
  if (0xb < uVar6) {
LAB_00602e3c:
    if ((char)*param_1 != '\x03') {
      uVar5 = *param_1;
      uVar7 = uVar5 >> 8;
      if ((uVar5 & 0xff) == 0) {
        uStack_2c = 0;
        uVar3 = 5;
        uStack_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_40 = 0;
        puVar4 = (&PTR_DAT_018af4fc)[uVar7 & 0xff];
      }
      else {
        if ((uVar5 & 0xff) == 1) {
          uStack_2c = 0;
          uStack_30 = 0;
          local_34 = 0;
          local_38 = 0;
          local_3c = 0;
          local_40 = 0;
          FUN_00603390(&local_58,&local_40,&DAT_0033d78d,7);
          FUN_00603494(&local_40,&local_58,uVar7);
        }
        else {
          uStack_2c = 0;
          uStack_30 = 0;
          local_34 = 0;
          local_38 = 0;
          local_3c = 0;
          local_40 = 0;
          FUN_00603390(&local_58,&local_40,&DAT_0033d7a2,7);
          FUN_00603494(&local_40,&local_58,uVar7);
          FUN_00603390(&local_58,&local_40,&DAT_003b6539,1);
          FUN_00603494(&local_40,&local_58,uVar5 >> 0x10);
          FUN_00603390(&local_58,&local_40,&DAT_003b6539,1);
          FUN_00603494(&local_40,&local_58,uVar5 >> 0x18);
        }
        puVar4 = &DAT_003e86b1;
        uVar3 = 1;
      }
      FUN_00603390(&local_58,&local_40,puVar4,uVar3);
      if (0x13 < local_58) goto LAB_00603328;
      iVar2 = (**(code **)(param_3 + 0xc))(param_2,auStack_54);
      if (iVar2 != 0) {
        return 1;
      }
    }
    if ((char)param_1[1] != '\x03') {
      uVar5 = param_1[1];
      uVar7 = uVar5 >> 8;
      if ((uVar5 & 0xff) == 0) {
        puVar4 = (&PTR_DAT_018af53c)[uVar7 & 0xff];
        uVar3 = *(undefined4 *)(&DAT_0041d9d8 + (uVar7 & 0xff) * 4);
        uStack_2c = 0;
        uStack_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_40 = 0;
      }
      else {
        if ((uVar5 & 0xff) == 1) {
          uStack_2c = 0;
          uStack_30 = 0;
          local_34 = 0;
          local_38 = 0;
          local_3c = 0;
          local_40 = 0;
          FUN_00603390(&local_58,&local_40,&DAT_0033d786,7);
          FUN_00603494(&local_40,&local_58,uVar7);
        }
        else {
          uStack_2c = 0;
          uStack_30 = 0;
          local_34 = 0;
          local_38 = 0;
          local_3c = 0;
          local_40 = 0;
          FUN_00603390(&local_58,&local_40,&DAT_0033d79b,7);
          FUN_00603494(&local_40,&local_58,uVar7);
          FUN_00603390(&local_58,&local_40,&DAT_003b6539,1);
          FUN_00603494(&local_40,&local_58,uVar5 >> 0x10);
          FUN_00603390(&local_58,&local_40,&DAT_003b6539,1);
          FUN_00603494(&local_40,&local_58,uVar5 >> 0x18);
        }
        puVar4 = &DAT_003e86b1;
        uVar3 = 1;
      }
      FUN_00603390(&local_58,&local_40,puVar4,uVar3);
      if (0x13 < local_58) goto LAB_00603328;
      iVar2 = (**(code **)(param_3 + 0xc))(param_2,auStack_54);
      if (iVar2 != 0) {
        return 1;
      }
    }
    uVar3 = 0;
    if ((char)param_1[2] != '\x03') {
      uVar7 = param_1[2];
      if ((uVar7 & 0xff) < 2) {
        uStack_2c = 0;
        uStack_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_40 = 0;
        FUN_00603390(&local_58,&local_40,&DAT_0033d794,7);
        FUN_00603494(&local_40,&local_58,uVar7 >> 8);
      }
      else {
        uStack_2c = 0;
        uStack_30 = 0;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_40 = 0;
        FUN_00603390(&local_58,&local_40,&DAT_0033d7a9,7);
        FUN_00603494(&local_40,&local_58,uVar7 >> 8);
        FUN_00603390(&local_58,&local_40,&DAT_003b6539,1);
        FUN_00603494(&local_40,&local_58,uVar7 >> 0x10);
        FUN_00603390(&local_58,&local_40,&DAT_003b6539,1);
        FUN_00603494(&local_40,&local_58,uVar7 >> 0x18);
      }
      FUN_00603390(&local_58,&local_40,&DAT_003e86b1,1);
      if (0x13 < local_58) {
LAB_00603328:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,local_58,0x13,&DAT_01857620);
      }
      uVar3 = (**(code **)(param_3 + 0xc))(param_2,auStack_54);
    }
  }
  return uVar3;
}

