// FUN_01a54d20 @ 01a54d20 size=424 calls_out=8 calls_in=2
// strings: 

void FUN_01a54d20(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  bool bVar11;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar7 = *(uint **)(param_1 + 0x1c);
  iVar2 = param_3 + 1;
  iVar1 = param_3 << 2;
  pcVar9 = (char *)((int)puVar7 + 0x69);
  iVar10 = *(int *)(param_1 + 0x20) * 0xc0;
  do {
    if (iVar10 == 0) {
      return;
    }
    if (param_3 == 0) {
      iVar3 = 4;
      iVar6 = 0;
    }
    else {
      iVar3 = FUN_01298504(iVar1,4);
      iVar6 = param_3;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,iVar1);
      }
    }
    local_30 = iVar6;
    local_2c = iVar3;
    FUN_01bed4e2(iVar3,param_2,iVar1);
    local_28 = param_3;
    FUN_01a54b48(&local_30);
    iVar3 = local_2c;
    iVar6 = local_30;
    *(uint **)(local_2c + param_3 * 4) = puVar7 + 0x1c;
    uVar4 = *puVar7;
    if (uVar4 == 1) {
      if (*(uint *)(pcVar9 + -0xd) < 2) {
        if (*pcVar9 != '\0') {
          FUN_01a60df8(pcVar9 + -0x61,local_2c,iVar2,param_4);
          goto LAB_01a54e40;
        }
        iVar8 = param_4[2];
        if (iVar8 == *param_4) {
          FUN_018fa978(param_4);
        }
      }
      else {
        iVar8 = param_4[2];
        if (iVar8 == *param_4) {
          FUN_018fa978(param_4);
        }
      }
      param_4[2] = iVar8 + 1;
      piVar5 = (int *)(param_4[1] + iVar8 * 0x10);
      *piVar5 = iVar6;
      piVar5[1] = iVar3;
      piVar5[2] = iVar2;
      piVar5[3] = (int)(pcVar9 + -0x61);
    }
    else {
      bVar11 = uVar4 == 2;
      if (bVar11) {
        uVar4 = (uint)(byte)pcVar9[-4];
      }
      if (bVar11 && uVar4 == 1) {
        FUN_01a54d20(pcVar9 + -0x61,local_2c,iVar2,param_4);
      }
LAB_01a54e40:
      FUN_0134aee0(local_30,iVar3,4,4);
    }
    puVar7 = puVar7 + 0x30;
    iVar10 = iVar10 + -0xc0;
    pcVar9 = pcVar9 + 0xc0;
  } while( true );
}

