// FUN_013b6efc @ 013b6efc size=496 calls_out=4 calls_in=5
// strings: 

void FUN_013b6efc(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_30 [3];
  uint local_24;
  
  puVar4 = local_30;
  puVar5 = local_30;
  puVar3 = local_30;
  local_30[1] = 0;
  local_30[0] = 0;
  local_24 = *(uint *)(*param_2 + 4) ^ 0x7fffffff;
  if ((uint)param_2[1] < local_24) {
    local_24 = param_2[1];
  }
  if (local_24 < 3) {
    local_30[2] = 3;
  }
  else {
    uVar6 = (uint)local_30 | 5;
    uVar1 = 3;
    do {
      uVar7 = FUN_013b1200(*param_2,param_2[1]);
      uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
      if (uVar1 <= uVar2) {
        uVar2 = uVar1;
      }
      FUN_01bed4e2((int)uVar7,uVar6,uVar2);
      FUN_013b1198(param_2,uVar2);
      uVar6 = uVar6 + uVar2;
      uVar1 = uVar1 - uVar2;
    } while (uVar1 != 0);
    local_30[0] = CONCAT31(local_30[0]._1_3_,*(undefined1 *)((int)param_1 + 5));
    uVar1 = *(uint *)(*param_2 + 4) ^ 0x7fffffff;
    if ((uint)param_2[1] < uVar1) {
      uVar1 = param_2[1];
    }
    if (uVar1 != 0) {
      uVar1 = 1;
      do {
        uVar7 = FUN_013b1200(*param_2,param_2[1]);
        uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
        if (uVar1 <= uVar6) {
          uVar6 = uVar1;
        }
        FUN_01bed4e2((int)uVar7,puVar4,uVar6);
        FUN_013b1198(param_2,uVar6);
        puVar4 = (uint *)((int)puVar4 + uVar6);
        uVar1 = uVar1 - uVar6;
      } while (uVar1 != 0);
      local_30[0] = CONCAT31(local_30[0]._1_3_,(char)param_1[1]);
      uVar1 = *(uint *)(*param_2 + 4) ^ 0x7fffffff;
      if ((uint)param_2[1] < uVar1) {
        uVar1 = param_2[1];
      }
      if (uVar1 != 0) {
        uVar1 = 1;
        do {
          uVar7 = FUN_013b1200(*param_2,param_2[1]);
          uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
          if (uVar1 <= uVar6) {
            uVar6 = uVar1;
          }
          FUN_01bed4e2((int)uVar7,puVar5,uVar6);
          FUN_013b1198(param_2,uVar6);
          puVar5 = (uint *)((int)puVar5 + uVar6);
          uVar1 = uVar1 - uVar6;
        } while (uVar1 != 0);
        uVar1 = *param_1;
        local_30[0] = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
                      uVar1 >> 0x18;
        local_24 = *(uint *)(*param_2 + 4) ^ 0x7fffffff;
        if ((uint)param_2[1] < local_24) {
          local_24 = param_2[1];
        }
        if (3 < local_24) {
          uVar1 = 4;
          do {
            uVar7 = FUN_013b1200(*param_2,param_2[1]);
            uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
            if (uVar1 <= uVar6) {
              uVar6 = uVar1;
            }
            FUN_01bed4e2((int)uVar7,puVar3,uVar6);
            FUN_013b1198(param_2,uVar6);
            puVar3 = (uint *)((int)puVar3 + uVar6);
            uVar1 = uVar1 - uVar6;
          } while (uVar1 != 0);
          return;
        }
        local_30[2] = 4;
        goto LAB_013b70e0;
      }
    }
    local_24 = 0;
    local_30[2] = 1;
  }
LAB_013b70e0:
                    /* WARNING: Subroutine does not return */
  FUN_01284540(local_30 + 2);
}

