// FUN_01017c44 @ 01017c44 size=388 calls_out=2 calls_in=5
// strings: 

undefined4 FUN_01017c44(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  bool bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint local_70 [3];
  int local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c [3];
  int local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_50 = param_1[2];
  if (local_50 == param_2[2]) {
    local_4c[2] = *param_2;
    local_70[2] = *param_1;
    local_64 = param_1[1];
    local_40 = param_2[1];
    local_2c = 0;
    if (local_4c[2] != 0) {
      local_2c = local_50;
    }
    local_4c[0] = (uint)(local_4c[2] != 0);
    if (local_70[2] == 0) {
      local_50 = 0;
    }
    local_70[0] = (uint)(local_70[2] != 0);
    local_24 = 0;
    local_28 = 0;
    local_38 = 0;
    local_4c[1] = 0;
    local_5c = 0;
    local_70[1] = 0;
    local_60 = local_70[0];
    local_58 = local_70[2];
    local_54 = local_64;
    local_3c = local_4c[0];
    local_34 = local_4c[2];
    local_30 = local_40;
    do {
      while( true ) {
        uVar6 = FUN_0124d68c(local_70);
        puVar3 = (uint *)((ulonglong)uVar6 >> 0x20);
        iVar1 = (int)uVar6;
        if (iVar1 == 0) {
          return 1;
        }
        uVar6 = FUN_0124d68c(local_4c);
        piVar4 = (int *)((ulonglong)uVar6 >> 0x20);
        iVar2 = (int)uVar6;
        if (iVar2 == 0) {
          return 1;
        }
        if (*(int *)(iVar1 + 8) != *(int *)(iVar2 + 8)) {
          return 0;
        }
        uVar7 = thunk_FUN_01bed842(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar2 + 4));
        bVar5 = (int)uVar7 != 0;
        if (!bVar5) {
          uVar7 = (ulonglong)CONCAT14((char)piVar4[8],(uint)(byte)puVar3[8]);
        }
        if (bVar5 || (int)(uVar7 >> 0x20) != (int)uVar7) {
          return 0;
        }
        if ((*puVar3 & 1) == 0) {
          if (*piVar4 != 0) {
            return 0;
          }
        }
        else {
          if (*piVar4 == 0) {
            return 0;
          }
          if (*(double *)(puVar3 + 2) != *(double *)(piVar4 + 2)) {
            return 0;
          }
        }
        if ((puVar3[4] & 1) == 0) break;
        if (piVar4[4] == 0) {
          return 0;
        }
        if (*(double *)(puVar3 + 6) != *(double *)(piVar4 + 6)) {
          return 0;
        }
      }
    } while (piVar4[4] == 0);
  }
  return 0;
}

