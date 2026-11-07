// FUN_0160df90 @ 0160df90 size=428 calls_out=3 calls_in=2
// strings: 

void FUN_0160df90(uint *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int local_40;
  int local_3c;
  uint local_38;
  int aiStack_34 [2];
  uint local_2c;
  uint local_28;
  
  if ((char)param_2[10] == '\0') {
    piVar1 = (int *)((uint)&local_58 | 4);
    while( true ) {
      (**(code **)(param_2[5] + 0xc))(&local_58,param_2[4],param_3);
      uVar2 = local_58 & 0xff;
      if (uVar2 != 0xe) break;
      local_40 = *piVar1;
      iVar5 = piVar1[1];
      uVar7 = piVar1[2];
      aiStack_34[0] = piVar1[3];
      uVar3 = param_2[8];
      uVar2 = param_2[6];
      uVar6 = param_2[7];
      uVar4 = uVar3 + uVar7;
      uVar3 = param_2[9] + (uint)CARRY4(uVar3,uVar7);
      param_2[8] = uVar4;
      param_2[9] = uVar3;
      local_3c = iVar5;
      local_38 = uVar7;
      if (uVar6 <= uVar3 && (uint)(uVar4 <= uVar2) <= uVar6 - uVar3) {
        param_1[2] = uVar2;
        *(undefined1 *)param_1 = 8;
        pcVar9 = *(code **)(local_40 + 0x10);
        param_1[3] = uVar6;
        (*pcVar9)(aiStack_34,iVar5,uVar7);
        return;
      }
      iVar8 = param_2[1];
      local_28 = param_2[2] - iVar8;
      if (local_28 < uVar7) {
        FUN_01283c9c(param_2,uVar7,uVar2 - uVar4);
        iVar8 = param_2[1];
        local_28 = param_2[2] - iVar8;
      }
      FUN_01bed4e2(*param_2 + iVar8,iVar5,uVar7);
      if (local_28 < uVar7) {
        local_2c = uVar7;
                    /* WARNING: Subroutine does not return */
        FUN_01284540(&local_2c);
      }
      param_2[1] = iVar8 + uVar7;
      (**(code **)(local_40 + 0x10))(aiStack_34,local_3c,local_38);
    }
    if (uVar2 == 0xf) {
      *(undefined1 *)param_1 = 0xe;
      *(undefined1 *)(param_2 + 10) = 1;
    }
    else if (uVar2 == 0x10) {
      *(undefined1 *)param_1 = 0xe;
    }
    else {
      *param_1 = local_58;
      param_1[1] = uStack_54;
      param_1[2] = uStack_50;
      param_1[3] = uStack_4c;
      param_1[4] = uStack_48;
      param_1[5] = uStack_44;
    }
  }
  else {
    *(undefined1 *)param_1 = 0xe;
  }
  return;
}

