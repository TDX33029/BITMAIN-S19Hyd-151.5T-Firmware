// FUN_009070dc @ 009070dc size=588 calls_out=8 calls_in=1
// strings: default_temperature

int FUN_009070dc(char *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  
  if (*param_1 != '\0') goto LAB_009072b0;
  iVar1 = FUN_00947ca4(param_1,"default_temperature",0x13);
  if (iVar1 == 0) {
    if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
    }
    puVar4 = *(undefined4 **)(param_1 + 4);
    piVar3 = (int *)*puVar4;
    iVar1 = piVar3[2];
    if ((uint)(*piVar3 - iVar1) < 2) {
      FUN_00933680(piVar3,iVar1,2,1,1);
      iVar1 = piVar3[2];
    }
    piVar3[2] = iVar1 + 2;
    *(undefined2 *)(piVar3[1] + iVar1) = 0x203a;
    piVar3 = (int *)*puVar4;
    iVar1 = piVar3[2];
    iVar2 = *piVar3;
    *(undefined1 *)(puVar4 + 4) = 0;
    puVar4[3] = puVar4[3] + 1;
    if (iVar2 == iVar1) {
      FUN_00933680(piVar3,iVar1,1,1,1);
      iVar1 = piVar3[2];
    }
    uVar5 = *(undefined8 *)(param_2 + 6);
    *(undefined1 *)(piVar3[1] + iVar1) = 0x7b;
    piVar3[2] = iVar1 + 1;
    local_28 = CONCAT22(local_28._2_2_,0x100);
    local_24 = puVar4;
    iVar1 = FUN_0094a19c((int)uVar5,&local_28,&DAT_0035942a,0xd);
    if (iVar1 == 0) {
      if ((char)local_28 != '\0') {
LAB_009072b0:
        local_20 = 10;
        iVar1 = FUN_0157c50c(&local_20,0,0);
        return iVar1;
      }
      iVar1 = FUN_0094a19c((int)*(undefined8 *)(param_2 + 8),&local_28,&DAT_00359437,10);
      if (iVar1 == 0) {
        if ((char)local_28 != '\0') goto LAB_009072b0;
        iVar1 = FUN_0094a19c((int)*(undefined8 *)(param_2 + 10),&local_28,&DAT_00564970,0x10);
        if (iVar1 == 0) {
          if ((char)local_28 != '\0') goto LAB_009072b0;
          iVar1 = FUN_0094a19c((int)*(undefined8 *)(param_2 + 0xc),&local_28,&DAT_00359441,0x19);
          if (((iVar1 == 0) &&
              (iVar1 = FUN_00908f8c((int)*(undefined8 *)(param_2 + 2),&local_28,param_2[1],*param_2,
                                    param_2[1]), iVar1 == 0)) &&
             (iVar1 = FUN_00909194(param_2[5],&local_28,param_2[4]), iVar1 == 0)) {
            local_20 = local_28;
            local_1c = local_24;
            FUN_009074c0(&local_20);
            *(undefined1 *)(puVar4 + 4) = 1;
            return 0;
          }
        }
      }
    }
  }
  return iVar1;
}

