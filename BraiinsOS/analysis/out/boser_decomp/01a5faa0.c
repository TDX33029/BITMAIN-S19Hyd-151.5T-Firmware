// FUN_01a5faa0 @ 01a5faa0 size=676 calls_out=10 calls_in=2
// strings: 

void FUN_01a5faa0(int *param_1,int *param_2,undefined1 param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [72];
  int local_70;
  int iStack_6c;
  int iStack_68;
  int *local_64;
  int local_60;
  int local_5c;
  
  if (*(char *)((int)param_1 + 0x5d) == '\0') {
    if (*param_1 == 0) {
      iVar4 = *(int *)*param_4;
    }
    else {
      iVar4 = param_1[1];
      *(int *)*param_4 = iVar4;
    }
    piVar5 = (int *)param_4[1];
    FUN_01a4d214(&local_70,param_2[1],param_2[2]);
    iVar8 = piVar5[2];
    local_5c = CONCAT31(local_5c._1_3_,param_3);
    local_64 = param_1;
    local_60 = iVar4;
    if (iVar8 == *piVar5) {
      FUN_015f5b18(piVar5);
    }
    piVar1 = (int *)(piVar5[1] + iVar8 * 0x18);
    *piVar1 = local_70;
    piVar1[1] = iStack_6c;
    piVar1[2] = iStack_68;
    piVar1[3] = (int)local_64;
    piVar1[4] = local_60;
    piVar1[5] = local_5c;
    piVar5[2] = iVar8 + 1;
  }
  if (param_1[8] != 0) {
    piVar5 = (int *)param_1[7];
    piVar1 = piVar5 + param_1[8] * 0x30;
    do {
      if (*piVar5 == 2) {
        FUN_01a60910(auStack_100,piVar5 + 0x1c);
        iVar4 = param_2[2];
        if (iVar4 == *param_2) {
          FUN_01a54ba8(param_2);
        }
        FUN_01bed4e2(param_2[1] + iVar4 * 0x48,auStack_100,0x48);
        param_2[2] = iVar4 + 1;
        FUN_01a5faa0(piVar5 + 2,param_2,0,param_4);
        if (param_2[2] != 0) {
          iVar4 = param_2[2] + -1;
          param_2[2] = iVar4;
          FUN_01bed4e2(&local_70,param_2[1] + iVar4 * 0x48,0x48);
          if (local_70 != -0x80000000) {
            FUN_01a49de4(&local_70);
          }
        }
      }
      else if (*piVar5 == 3) {
        piVar6 = (int *)piVar5[5];
        iVar4 = piVar5[6];
        puVar2 = (undefined4 *)thunk_FUN_01be5118(8);
        if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,8);
        }
        *puVar2 = piVar6;
        piVar3 = piVar6 + iVar4 * 0x1c;
        puVar2[1] = piVar3;
        while (piVar7 = piVar6, piVar7 != piVar3) {
          iVar4 = *piVar7;
          *puVar2 = piVar7 + 0x1c;
          piVar6 = piVar7 + 0x1c;
          if (iVar4 == 2) {
            FUN_01a60910(auStack_b8,piVar5 + 0x1c);
            iVar4 = param_2[2];
            if (iVar4 == *param_2) {
              FUN_01a54ba8(param_2);
            }
            FUN_01bed4e2(param_2[1] + iVar4 * 0x48,auStack_b8,0x48);
            param_2[2] = iVar4 + 1;
            FUN_01a5faa0(piVar7 + 2,param_2,1,param_4);
            if (param_2[2] != 0) {
              iVar4 = param_2[2] + -1;
              param_2[2] = iVar4;
              FUN_01bed4e2(&local_70,param_2[1] + iVar4 * 0x48,0x48);
              if (local_70 != -0x80000000) {
                FUN_01a49de4(&local_70);
              }
            }
            piVar3 = (int *)puVar2[1];
            piVar6 = (int *)*puVar2;
          }
        }
        FUN_018f2d80(puVar2,&DAT_01d2c510);
      }
      piVar5 = piVar5 + 0x30;
    } while (piVar5 != piVar1);
  }
  return;
}

