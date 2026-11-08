// FUN_0189040c @ 0189040c size=528 calls_out=7 calls_in=2
// strings: 

void FUN_0189040c(int *param_1,undefined4 *param_2,int param_3,uint param_4,uint param_5)

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
    FUN_01304210(0,&local_6c,&local_70,0);
  }
  if (param_4 < param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_0051d342,0x2e,&DAT_01d2140c);
  }
  if (param_4 <= param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_5,param_4,&DAT_01d2141c);
  }
  uVar7 = param_5 + 1;
  *(undefined1 *)(param_3 + param_5) = 0x80;
  if (param_4 - *(int *)(iVar1 + 0x54) <= param_5) {
    iVar1 = param_3 + uVar7;
    iVar4 = param_4 - uVar7;
    uVar7 = 0;
    FUN_01bed93e(iVar1,0,iVar4);
    DataMemoryBarrier(0xb);
    if (DAT_01d51afc != '\x02') {
      FUN_0188ff90();
    }
    (**(code **)(param_2[0x12] + 0x40))(param_2,param_3,1);
  }
  uVar6 = param_4 - 8;
  if (param_4 < 8 || uVar6 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar7,uVar6,param_4,&DAT_01d2142c);
  }
  FUN_01bed93e(param_3 + uVar7,0,uVar6 - uVar7);
  uVar2 = (uint)((ulonglong)param_4 * (ulonglong)(uint)param_2[0x11]);
  uVar7 = (uint)((ulonglong)param_4 * (ulonglong)(uint)param_2[0x10]);
  uVar5 = (uint)((ulonglong)param_4 * (ulonglong)(uint)param_2[0x10] >> 0x20);
  uVar3 = uVar5 + uVar2;
  if ((int)((ulonglong)param_4 * (ulonglong)(uint)param_2[0x11] >> 0x20) != 0 || CARRY4(uVar5,uVar2)
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2143c);
  }
  uVar2 = uVar7 + param_5;
  uVar5 = uVar3 + CARRY4(uVar7,param_5);
  if (CARRY4(uVar3,(uint)CARRY4(uVar7,param_5))) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2144c);
  }
  if (0x1fffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2145c);
  }
  *(uint *)(param_3 + uVar6) =
       (uVar5 * 8 & 0xff | uVar2 >> 0x1d) << 0x18 | ((uVar5 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
       ((uVar5 & 0x1fffffff) >> 0xd & 0xff) << 8 | (uVar5 & 0x1fffffff) >> 0x15;
  ((uint *)(param_3 + uVar6))[1] =
       uVar2 * 0x8000000 | ((uVar2 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
       ((uVar2 & 0x1fffffff) >> 0xd & 0xff) << 8 | (uVar2 & 0x1fffffff) >> 0x15;
  DataMemoryBarrier(0xb);
  if (DAT_01d51afc != '\x02') {
    FUN_0188ff90();
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

