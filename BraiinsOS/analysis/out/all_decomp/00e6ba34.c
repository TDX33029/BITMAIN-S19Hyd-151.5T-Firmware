// FUN_00e6ba34 @ 00e6ba34 size=712 calls_out=8 calls_in=1
// strings: stats | mining | work_solver

int FUN_00e6ba34(char *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint local_34;
  undefined4 *local_30;
  undefined4 local_2c [3];
  
  if (*param_1 != '\0') {
LAB_00e6bc4c:
    local_2c[0] = 10;
    iVar2 = FUN_0157c50c(local_2c,0,0);
    return iVar2;
  }
  iVar2 = FUN_00e5b230(param_1,"stats",5);
  if (iVar2 == 0) {
    if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
    }
    puVar6 = *(undefined4 **)(param_1 + 4);
    piVar5 = (int *)*puVar6;
    iVar2 = piVar5[2];
    if ((uint)(*piVar5 - iVar2) < 2) {
      FUN_00edff4c(piVar5,iVar2,2,1,1);
      iVar2 = piVar5[2];
    }
    iVar3 = *param_2;
    iVar4 = param_2[1];
    piVar5[2] = iVar2 + 2;
    *(undefined2 *)(piVar5[1] + iVar2) = 0x203a;
    if (iVar3 == 2 && iVar4 == 0) {
      piVar5 = (int *)*puVar6;
      iVar2 = piVar5[2];
      if ((uint)(*piVar5 - iVar2) < 4) {
        FUN_00edff4c(piVar5,iVar2,4,1,1);
        iVar2 = piVar5[2];
      }
      *(undefined4 *)(piVar5[1] + iVar2) = 0x6c6c756e;
      piVar5[2] = iVar2 + 4;
LAB_00e6baf4:
      *(undefined1 *)(puVar6 + 4) = 1;
      return 0;
    }
    piVar5 = (int *)*puVar6;
    iVar2 = piVar5[2];
    iVar3 = *piVar5;
    *(undefined1 *)(puVar6 + 4) = 0;
    puVar6[3] = puVar6[3] + 1;
    if (iVar3 == iVar2) {
      FUN_00edff4c(piVar5,iVar2,1,1,1);
      iVar2 = piVar5[2];
    }
    *(undefined1 *)(piVar5[1] + iVar2) = 0x7b;
    piVar5[2] = iVar2 + 1;
    local_34 = CONCAT22(local_34._2_2_,0x100);
    local_30 = puVar6;
    iVar2 = FUN_00e5b898(&local_34,"mining",param_2);
    if (iVar2 == 0) {
      if ((char)local_34 == '\x01') goto LAB_00e6bc4c;
      iVar2 = FUN_00e66358(&local_34,"work_solver",param_2 + 0x3a);
      puVar1 = local_30;
      if (iVar2 == 0) {
        if (((local_34 & 0xff00) != 0) && ((local_34 & 1) == 0)) {
          piVar5 = (int *)*local_30;
          iVar2 = local_30[3] + -1;
          local_30[3] = iVar2;
          if ((*(char *)(local_30 + 4) == '\x01') &&
             (FUN_00f1f6ac(piVar5,&DAT_0041950e,1), iVar2 != 0)) {
            uVar7 = puVar1[1];
            uVar8 = puVar1[2];
            iVar3 = piVar5[2];
            do {
              if ((uint)(*piVar5 - iVar3) < uVar8) {
                FUN_00edff4c(piVar5,iVar3,uVar8,1,1);
                iVar3 = piVar5[2];
              }
              FUN_016dd1aa(piVar5[1] + iVar3,uVar7,uVar8);
              iVar3 = iVar3 + uVar8;
              iVar2 = iVar2 + -1;
              piVar5[2] = iVar3;
            } while (iVar2 != 0);
          }
          FUN_00f1f6ac(piVar5,"}",1);
        }
        goto LAB_00e6baf4;
      }
    }
  }
  return iVar2;
}

