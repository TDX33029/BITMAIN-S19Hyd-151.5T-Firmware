// FUN_0132f050 @ 0132f050 size=500 calls_out=0 calls_in=2
// strings: 

void FUN_0132f050(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iStack_4c;
  int iStack_48;
  uint uStack_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  
  uVar1 = param_2[0xe];
  if (uVar1 != param_2[0xf]) {
LAB_0132f22c:
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 1;
    return;
  }
  uVar3 = param_2[10];
  uVar2 = param_2[0xc];
  uVar7 = param_2[0xd];
  if (uVar2 != uVar3 + uVar1 || uVar7 != param_2[0xb] + (uint)CARRY4(uVar3,uVar1)) {
    uVar1 = param_2[9];
    uVar6 = uVar3 + uVar1;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[8] = 1;
    param_2[9] = 0;
    iVar5 = param_2[0xb] + (uint)CARRY4(uVar3,uVar1);
    param_2[10] = uVar6;
    param_2[0xb] = iVar5;
    if (*param_2 == 0) {
      iVar4 = param_2[1];
      if (iVar4 == 0) {
        iVar4 = param_2[3];
        (**(code **)(iVar4 + 0x30))(param_2[2],uVar1);
        (**(code **)(iVar4 + 0x2c))(&iStack_4c,param_2[2]);
        local_30 = iStack_48;
        local_2c = uStack_44;
        if (iStack_4c != 0) {
LAB_0132f1c8:
          param_1[2] = local_2c;
          *param_1 = 0;
          *(char *)((int)param_1 + 7) = (char)((uint)local_30 >> 0x18);
          *(char *)(param_1 + 1) = (char)local_30;
          *(short *)((int)param_1 + 5) = (short)((uint)local_30 >> 8);
          return;
        }
      }
      else {
        uVar3 = param_2[3] + uVar1;
        if ((uint)param_2[4] < param_2[3] + uVar1) {
          uVar3 = param_2[4];
        }
        local_38 = param_2[4];
        param_2[3] = uVar3;
        if (local_38 <= uVar3) {
          local_3c = param_2[2];
          uVar3 = 0;
          local_34 = param_2[5];
          local_38 = 0;
          local_40 = iVar4;
          (**(code **)(param_2[7] + 0x24))(&local_30,param_2[6],&local_40);
          param_2[3] = 0;
          param_2[4] = local_38;
          param_2[5] = local_34;
          if ((char)local_30 != '\x04') goto LAB_0132f1c8;
        }
        iStack_48 = iVar4 + uVar3;
        uStack_44 = local_38 - uVar3;
      }
      param_2[8] = iStack_48;
      param_2[9] = uStack_44;
      uVar1 = iVar5 + (uint)CARRY4(uVar6,uStack_44);
      if (uVar7 <= uVar1 && (uint)(uVar6 + uStack_44 <= uVar2) <= uVar7 - uVar1) {
        uStack_44 = uVar2 - uVar6;
      }
      param_2[0xf] = uStack_44;
      if (uStack_44 != 0) goto LAB_0132f22c;
    }
  }
  *param_1 = 4;
  return;
}

