// FUN_015e1c18 @ 015e1c18 size=348 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_015e1c18(longlong *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  longlong *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  int local_3c;
  undefined1 *local_38;
  char *local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  undefined *local_24;
  
  local_44 = (undefined1 *)&local_48;
  uVar3 = 0;
  uVar7 = *(uint *)((int)param_1 + 0xc);
  uVar4 = param_4 - (uVar7 + (*(uint *)(param_1 + 1) > param_3));
  if (param_4 <= uVar7 && (uint)(*(uint *)(param_1 + 1) <= param_3) <= param_4 - uVar7) {
    puVar6 = (uint *)(param_1 + 2);
    uVar7 = *puVar6;
    uVar8 = *(uint *)((int)param_1 + 0x14);
    uVar4 = param_4 - (uVar8 + (uVar7 > param_3));
    if (uVar8 < param_4 || param_4 - uVar8 < (uint)(uVar7 <= param_3)) {
      if (4 < DAT_01d51b00) {
        local_48 = param_1 + 5;
        local_38 = &LAB_015df5cc;
        local_3c = (int)param_1 + 0x34;
        local_24 = &DAT_01cfd4b8;
        local_28 = 0x13;
        local_30 = 0x13;
        local_40 = &LAB_0193a90c;
        local_2c = "m";
        local_34 = "m";
        FUN_015fb650(&DAT_00573d6c,&local_44,5,&local_34);
        uVar7 = *puVar6;
        uVar8 = *(uint *)((int)param_1 + 0x14);
      }
      uVar5 = *(uint *)(param_1 + 3);
      lVar1 = (ulonglong)uVar5 * 0x352 + *param_1;
      if ((ulonglong)uVar5 * 800 + *param_1 == CONCAT44(uVar8,uVar7)) {
        uVar4 = 0;
        lVar2 = lVar1;
      }
      else {
        lVar2 = (ulonglong)uVar5 * 900 + *param_1;
        if (lVar1 == CONCAT44(uVar8,uVar7)) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar7 ^ (uint)lVar2;
          if (uVar4 == 0 && uVar8 == (uint)((ulonglong)lVar2 >> 0x20)) {
            uVar7 = 0x3b6;
          }
          else {
            uVar7 = 1000;
          }
          lVar2 = (ulonglong)uVar7 * (ulonglong)uVar5 + *param_1;
        }
      }
      uVar3 = 1;
      *(longlong *)puVar6 = lVar2;
    }
  }
  return CONCAT44(uVar4,uVar3);
}

