// FUN_01a60df8 @ 01a60df8 size=348 calls_out=7 calls_in=3
// strings: 

void FUN_01a60df8(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int local_30;
  int local_2c;
  int local_28;
  
  piVar5 = *(int **)(param_1 + 0x14);
  iVar1 = param_3 << 2;
  pcVar7 = (char *)((int)piVar5 + 0x69);
  iVar8 = *(int *)(param_1 + 0x18) * 0xc0;
  do {
    if (iVar8 == 0) {
      return;
    }
    if (param_3 == 0) {
      iVar2 = 4;
      iVar3 = 0;
    }
    else {
      iVar2 = FUN_01298504(iVar1,4);
      iVar3 = param_3;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,iVar1);
      }
    }
    local_30 = iVar3;
    local_2c = iVar2;
    FUN_01bed4e2(iVar2,param_2,iVar1);
    local_28 = param_3;
    FUN_01a54b48(&local_30);
    iVar2 = local_2c;
    iVar3 = local_30;
    *(int **)(local_2c + param_3 * 4) = piVar5 + 0x1c;
    if (*piVar5 == 1) {
      if ((*(uint *)(pcVar7 + -0xd) < 2) && (*pcVar7 == '\x01')) {
        FUN_01a60df8(pcVar7 + -0x61,local_2c,param_3 + 1,param_4);
        goto LAB_01a60ed0;
      }
      iVar6 = param_4[2];
      if (iVar6 == *param_4) {
        FUN_018fa978();
      }
      param_4[2] = iVar6 + 1;
      piVar4 = (int *)(param_4[1] + iVar6 * 0x10);
      *piVar4 = iVar3;
      piVar4[1] = iVar2;
      piVar4[2] = param_3 + 1;
      piVar4[3] = (int)(pcVar7 + -0x61);
    }
    else {
LAB_01a60ed0:
      FUN_0134aee0(local_30,iVar2,4,4);
    }
    piVar5 = piVar5 + 0x30;
    iVar8 = iVar8 + -0xc0;
    pcVar7 = pcVar7 + 0xc0;
  } while( true );
}

