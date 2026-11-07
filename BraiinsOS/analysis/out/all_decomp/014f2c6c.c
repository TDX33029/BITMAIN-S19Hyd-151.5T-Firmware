// FUN_014f2c6c @ 014f2c6c size=520 calls_out=7 calls_in=9
// strings: assertion failed: num_pending <= pending.len()

void FUN_014f2c6c(int *param_1,undefined4 *param_2,int param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = param_2[0x12];
  local_70 = *(uint *)(iVar1 + 0x50);
  local_6c = param_4;
  if (param_4 != local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&local_6c,&local_70,0);
  }
  if (param_4 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: num_pending <= pending.len()",0x2e,&DAT_018a6d40);
  }
  if (param_4 <= param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_5,param_4,&DAT_018a6d50);
  }
  uVar6 = param_5 + 1;
  *(undefined1 *)(param_3 + param_5) = 0x80;
  if (param_4 - *(int *)(iVar1 + 0x54) <= param_5) {
    iVar1 = param_3 + uVar6;
    iVar4 = param_4 - uVar6;
    uVar6 = 0;
    FUN_016dd606(iVar1,0,iVar4);
    DataMemoryBarrier(0xb);
    if (DAT_018dd942 != '\x02') {
      FUN_01110ec4();
    }
    (**(code **)(param_2[0x12] + 0x40))(param_2,param_3,1);
  }
  uVar7 = param_4 - 8;
  if (param_4 < 8 || uVar7 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar6,uVar7,param_4,&DAT_018a6d90);
  }
  FUN_016dd606(param_3 + uVar6,0,uVar7 - uVar6);
  uVar2 = (uint)((ulonglong)param_4 * (ulonglong)(uint)param_2[0x11]);
  uVar6 = (uint)((ulonglong)param_4 * (ulonglong)(uint)param_2[0x10]);
  uVar5 = (uint)((ulonglong)param_4 * (ulonglong)(uint)param_2[0x10] >> 0x20);
  uVar3 = uVar5 + uVar2;
  if ((int)((ulonglong)param_4 * (ulonglong)(uint)param_2[0x11] >> 0x20) != 0 || CARRY4(uVar5,uVar2)
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a6d80);
  }
  uVar2 = uVar6 + param_5;
  uVar5 = uVar3 + CARRY4(uVar6,param_5);
  if (CARRY4(uVar3,(uint)CARRY4(uVar6,param_5))) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a6d70);
  }
  if (0x1fffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a6d60);
  }
  *(uint *)(param_3 + uVar7) =
       (uVar5 * 8 & 0xff | uVar2 >> 0x1d) << 0x18 | ((uVar5 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
       ((uVar5 & 0x1fffffff) >> 0xd & 0xff) << 8 | (uVar5 & 0x1fffffff) >> 0x15;
  ((uint *)(param_3 + uVar7))[1] =
       uVar2 * 0x8000000 | ((uVar2 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
       ((uVar2 & 0x1fffffff) >> 0xd & 0xff) << 8 | (uVar2 & 0x1fffffff) >> 0x15;
  DataMemoryBarrier(0xb);
  if (DAT_018dd942 != '\x02') {
    FUN_01110ec4();
  }
  (**(code **)(param_2[0x12] + 0x40))(param_2,param_3,1);
  iVar1 = param_2[0x12];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  uStack_58 = param_2[4];
  local_54 = param_2[5];
  uStack_50 = param_2[6];
  uStack_4c = param_2[7];
  uStack_48 = param_2[8];
  uStack_44 = param_2[9];
  local_40 = param_2[10];
  uStack_3c = param_2[0xb];
  uStack_38 = param_2[0xc];
  uStack_34 = param_2[0xd];
  uStack_30 = param_2[0xe];
  uStack_2c = param_2[0xf];
  (**(code **)(iVar1 + 0x44))(param_1 + 1);
  *param_1 = iVar1;
  return;
}

