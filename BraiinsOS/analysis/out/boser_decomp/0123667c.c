// FUN_0123667c @ 0123667c size=984 calls_out=13 calls_in=1
// strings: telemetry_enabled | telemetry_submit_period_secsstruct Autotuningstruct Managementstruct PerformanceScalingstruct PlusConfigDescriptor

void FUN_0123667c(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint *local_6c;
  uint *local_68;
  uint *local_64;
  uint *local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  uint *local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined1 uStack_25;
  
  uVar2 = 0x15;
  if ((int)*param_2 < 0) {
    uVar2 = *param_2 ^ 0x80000000;
  }
  if (uVar2 != 0x14) {
    if (uVar2 != 0x15) {
      FUN_01222458(param_1,param_2,&uStack_25,&DAT_01c24794);
      return;
    }
    local_68 = (uint *)param_2[1];
    local_5c = 0;
    local_60 = (uint *)0x0;
    local_64 = local_68 + param_2[2] * 8;
    if (param_2[2] == 0) {
      uVar2 = 2;
      uVar8 = 2;
      local_6c = param_2;
    }
    else {
      uVar2 = 2;
      uVar9 = 3;
      do {
        puVar5 = local_68 + 8;
        local_60 = local_68 + 4;
        local_5c = local_5c + 1;
        uVar3 = 0x15;
        if ((int)*local_68 < 0) {
          uVar3 = *local_68 ^ 0x80000000;
        }
        switch(uVar3) {
        case 1:
          uVar3 = (uint)(byte)local_68[1];
          uVar7 = 0;
          break;
        default:
          puVar1 = local_68;
          local_68 = puVar5;
          FUN_01222458(&local_58,puVar1,&uStack_25,&DAT_01c24854);
          goto LAB_012367bc;
        case 4:
          uVar3 = local_68[2];
          uVar7 = local_68[3];
          break;
        case 0xc:
          uVar3 = local_68[2];
          uVar7 = local_68[3];
          goto LAB_012367ac;
        case 0xd:
          uVar3 = local_68[1];
          uVar7 = local_68[2];
LAB_012367ac:
          local_68 = puVar5;
          FUN_01237310(&local_58,uVar3,uVar7);
          goto LAB_012367bc;
        case 0xe:
          uVar3 = local_68[2];
          uVar7 = local_68[3];
          goto LAB_01236784;
        case 0xf:
          uVar3 = local_68[1];
          uVar7 = local_68[2];
LAB_01236784:
          local_68 = puVar5;
          FUN_01237094(&local_58,uVar3,uVar7);
          goto LAB_012367bc;
        }
        local_68 = puVar5;
        FUN_012338a0(&local_58,&switchD_01236720::switchdataD_01236724,uVar3,uVar7);
LAB_012367bc:
        if (local_58 != 2) {
          FUN_01bed4e2((int)param_1 + 5,(int)&local_54 + 1,0x2b);
          *(undefined1 *)(param_1 + 1) = (undefined1)local_54;
          *param_1 = local_58;
          return;
        }
        if ((local_54 & 1) == 0) {
          if (uVar9 != 3) {
            uVar6 = 0x11;
            pcVar4 = "telemetry_enabled";
            goto LAB_01236a34;
          }
          FUN_012227b0(&local_58,&local_68);
          uVar9 = local_54 & 0xff;
          if (local_58 != 2) {
            FUN_01bed4e2((int)param_1 + 5,(int)&local_54 + 1,0x2b);
            *(undefined1 *)(param_1 + 1) = (undefined1)local_54;
            *param_1 = local_58;
            return;
          }
        }
        else {
          if (uVar2 != 2) {
            uVar6 = 0x1c;
            pcVar4 = 
            "telemetry_submit_period_secsstruct Autotuningstruct Managementstruct PerformanceScalingstruct PlusConfigDescriptor"
            ;
LAB_01236a34:
            FUN_0123c090(param_1,pcVar4,uVar6);
            if (*param_1 != 2) {
              return;
            }
            goto LAB_01236984;
          }
          FUN_01222670(&local_58,&local_68);
          if (local_58 != 2) {
            param_1[3] = local_4c;
            param_1[4] = iStack_48;
            param_1[5] = iStack_44;
            param_1[6] = local_40;
            param_1[7] = local_3c;
            param_1[8] = iStack_38;
            param_1[9] = iStack_34;
            param_1[10] = iStack_30;
            param_1[0xb] = iStack_2c;
            *param_1 = local_58;
            param_1[1] = local_54;
            param_1[2] = (int)local_50;
            return;
          }
          local_6c = local_50;
          uVar2 = local_54;
        }
        uVar8 = (undefined1)uVar9;
      } while (local_68 != local_64);
      if (uVar9 == 3) {
        uVar8 = 2;
      }
    }
    *(undefined1 *)(param_1 + 3) = uVar8;
    uVar9 = 0;
    if (uVar2 != 2) {
      uVar9 = uVar2;
    }
    param_1[1] = uVar9;
    param_1[2] = (int)local_6c;
LAB_01236984:
    FUN_01223db8(&local_58,&local_68);
    goto LAB_01236994;
  }
  puVar5 = (uint *)param_2[2];
  uVar6 = 0;
  local_60 = (uint *)0x0;
  local_64 = puVar5 + param_2[3] * 4;
  local_68 = puVar5;
  if (param_2[3] == 0) {
LAB_01236a68:
    FUN_0123c028(param_1,uVar6,&DAT_01c24904,&DAT_01d064b8);
    if (*param_1 != 2) {
      return;
    }
  }
  else {
    local_60 = (uint *)0x1;
    local_68 = puVar5 + 4;
    FUN_0123e104(&local_58,puVar5);
    uVar8 = (undefined1)local_54;
    if (local_58 != 2) {
      FUN_01bed4e2((int)param_1 + 5,(int)&local_54 + 1,0x2b);
      *(undefined1 *)(param_1 + 1) = (undefined1)local_54;
      *param_1 = local_58;
      return;
    }
    FUN_012227f0(&local_58,&local_68);
    if (local_58 != 2) {
      param_1[3] = local_4c;
      param_1[4] = iStack_48;
      param_1[5] = iStack_44;
      param_1[6] = local_40;
      param_1[7] = local_3c;
      param_1[8] = iStack_38;
      param_1[9] = iStack_34;
      param_1[10] = iStack_30;
      param_1[0xb] = iStack_2c;
      *param_1 = local_58;
      param_1[1] = local_54;
      param_1[2] = (int)local_50;
      return;
    }
    if (local_54 == 2) {
      uVar6 = 1;
      goto LAB_01236a68;
    }
    *(undefined1 *)(param_1 + 3) = uVar8;
    param_1[1] = local_54;
    param_1[2] = (int)local_50;
  }
  FUN_01223e04(&local_58,&local_68);
LAB_01236994:
  if (local_58 == 2) {
    *param_1 = 2;
  }
  else {
    *param_1 = local_58;
    param_1[1] = local_54;
    param_1[2] = (int)local_50;
    param_1[3] = local_4c;
    param_1[4] = iStack_48;
    param_1[5] = iStack_44;
    param_1[6] = local_40;
    param_1[7] = local_3c;
    param_1[8] = iStack_38;
    param_1[9] = iStack_34;
    param_1[10] = iStack_30;
    param_1[0xb] = iStack_2c;
  }
  return;
}

