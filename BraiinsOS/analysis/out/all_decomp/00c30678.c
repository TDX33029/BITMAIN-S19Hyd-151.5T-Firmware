// FUN_00c30678 @ 00c30678 size=692 calls_out=7 calls_in=1
// strings: {ERR:E1} No EEPROMs available for detection | No builders available | {{ERR:E2}} Model detection failed

/* WARNING: Removing unreachable block (ram,0x00c30800) */
/* WARNING: Removing unreachable block (ram,0x00c3080c) */
/* WARNING: Removing unreachable block (ram,0x00c30814) */
/* WARNING: Removing unreachable block (ram,0x00c30820) */

void FUN_00c30678(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *local_80;
  int local_70;
  int *local_6c;
  int local_68;
  int local_60;
  char *local_5c;
  uint local_58;
  char *local_50;
  char *local_4c;
  undefined4 *local_48;
  char *local_44;
  int local_40;
  undefined4 *local_3c;
  int local_38;
  char *pcStack_34;
  uint uStack_30;
  
  if (*(int *)(param_3 + 8) == 0) {
    iVar4 = FUN_00c70f88("{ERR:E1} No EEPROMs available for detection",0x2b);
    *param_1 = 0;
    param_1[1] = iVar4;
    param_1[2] = 0;
    param_1[3] = 8;
    param_1[4] = 0;
    return;
  }
  local_80 = (undefined4 *)FUN_00c70f88("No builders available",0x15);
  iVar4 = 0;
  piVar6 = *(int **)(param_2 + 4);
  piVar7 = (int *)&DAT_00000008;
  local_68 = 0;
  local_6c = (int *)&DAT_00000008;
  local_70 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    piVar5 = piVar6 + *(int *)(param_2 + 8) * 2;
    do {
      (**(code **)(piVar6[1] + 0x14))
                (&local_40,*piVar6 + (*(int *)(piVar6[1] + 8) - 1U & 0xfffffff8) + 8,param_3,
                 param_2 + 0xc);
      puVar3 = local_3c;
      if (local_40 != 0) {
        *param_1 = local_40;
        param_1[1] = (int)local_3c;
        param_1[2] = local_38;
        param_1[3] = (int)pcStack_34;
        param_1[4] = uStack_30;
        if (iVar4 != 0) {
          iVar4 = 1 - iVar4;
          piVar6 = piVar7;
          do {
            if (*piVar6 == 2 && piVar6[1] == 0) {
              (*(code *)**(undefined4 **)piVar6[2])();
            }
            else {
              FUN_00cce13c(piVar6);
            }
            iVar4 = iVar4 + 1;
            piVar6 = piVar6 + 0x44;
          } while (iVar4 != 1);
        }
        if (local_70 != 0) {
          thunk_FUN_016d3fb4(piVar7);
        }
        (**(code **)*local_80)();
        return;
      }
      local_60 = local_38;
      local_5c = pcStack_34;
      local_58 = uStack_30;
      (**(code **)*local_80)();
      uVar2 = local_58;
      pcVar1 = local_5c;
      local_80 = puVar3;
      local_48 = (undefined4 *)local_60;
      local_44 = local_5c + local_58 * 0x110;
      local_50 = local_5c;
      local_4c = local_5c;
      if ((uint)(local_70 - local_68) < local_58) {
        FUN_00d653ec(&local_70,local_68,local_58,8,0x110);
      }
      iVar4 = local_68;
      piVar7 = local_6c;
      FUN_016dd1aa(local_6c + local_68 * 0x44,pcVar1,uVar2 * 0x110);
      iVar4 = iVar4 + uVar2;
      local_44 = pcVar1;
      local_68 = iVar4;
      FUN_00cd6340(&local_50);
      piVar6 = piVar6 + 2;
    } while (piVar6 != piVar5);
  }
  local_40 = 3;
  local_48 = local_80;
  local_4c = (char *)0x21;
  local_50 = "{{ERR:E2}} Model detection failed";
  iVar4 = FUN_00c70528(&local_50,&local_40);
  *param_1 = 0;
  param_1[1] = iVar4;
  param_1[2] = local_70;
  param_1[3] = (int)local_6c;
  param_1[4] = local_68;
  return;
}

