// FUN_015ba9c0 @ 015ba9c0 size=504 calls_out=2 calls_in=1
// strings: 

void FUN_015ba9c0(undefined1 *param_1,undefined4 *param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint local_30;
  char local_2c;
  undefined1 local_2b;
  byte local_2a;
  uint local_28;
  
  uVar7 = param_2[7];
  uVar4 = param_2[6];
  pcVar5 = *(code **)(uVar7 + 0x14);
  uVar1 = (*pcVar5)(uVar4);
  if (*(char *)(param_2 + 8) == '\0') {
    if (param_6 < param_4) {
      param_1[1] = 6;
      *param_1 = 1;
      return;
    }
    FUN_016dd1aa(param_5,param_3,param_4);
    local_30 = param_4;
LAB_015baad0:
    uVar1 = (*pcVar5)(uVar4);
    (**(code **)(uVar7 + 0x18))(uVar4);
    if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar1,0x40,&DAT_018aa5a8);
    }
    pcVar5 = *(code **)(uVar7 + 0x1c);
    (*pcVar5)(uVar4,(int)param_2 + 0x21,uVar1);
    (*pcVar5)(uVar4,param_3,param_4);
    (**(code **)(param_2[7] + 0x20))(param_2[6],(int)param_2 + 0x21,0x40);
    *(uint *)(param_1 + 4) = local_30;
    *param_1 = 0;
    return;
  }
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,0x40,&DAT_018aa558);
  }
  uVar3 = 6;
  if ((0xf < param_4) && (uVar7 = param_4 - 0x10, uVar7 <= param_6)) {
    uVar3 = 3;
    uVar7 = 0;
    if (*(char *)(param_2 + 4) == '\x01') {
      uVar6 = param_2[2];
      uVar2 = param_2[3];
      if ((uVar6 & uVar2) == 0xffffffff) {
        uVar7 = 8;
      }
      else {
        (**(code **)(param_2[1] + 0x18))
                  (&local_2c,*param_2,uVar6,uVar2,(int)param_2 + 0x21,uVar1,param_3,param_4,param_5,
                   param_6);
        if (local_2c != '\x01') {
          local_30 = local_28;
          uVar7 = param_2[7];
          uVar4 = param_2[6];
          pcVar5 = *(code **)(uVar7 + 0x14);
          param_2[2] = uVar6 + 1;
          param_2[3] = uVar2 + (0xfffffffe < uVar6);
          goto LAB_015baad0;
        }
        uVar7 = (uint)local_2a;
        uVar3 = local_2b;
      }
    }
  }
  param_1[2] = (char)uVar7;
  param_1[1] = uVar3;
  *param_1 = 1;
  return;
}

