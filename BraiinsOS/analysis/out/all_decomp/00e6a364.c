// FUN_00e6a364 @ 00e6a364 size=1136 calls_out=7 calls_in=1
// strings: power_info | target | approx_wall_consumption | measured_wall_consumption | measured_chip_consumption

int FUN_00e6a364(char *param_1,uint *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  
  if (*param_1 != '\0') {
    local_30 = 10;
    iVar2 = FUN_0157c50c(&local_30,0,0);
    return iVar2;
  }
  iVar2 = FUN_00e5b230(param_1,"power_info",10);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*param_1 != '\x01') {
    puVar5 = *(undefined4 **)(param_1 + 4);
    piVar4 = (int *)*puVar5;
    iVar2 = piVar4[2];
    if ((uint)(*piVar4 - iVar2) < 2) {
      FUN_00edff4c(piVar4,iVar2,2,1,1);
      iVar2 = piVar4[2];
    }
    uVar6 = *param_2;
    uVar7 = param_2[1];
    piVar4[2] = iVar2 + 2;
    *(undefined2 *)(piVar4[1] + iVar2) = 0x203a;
    if (uVar6 == 2 && uVar7 == 0) {
      piVar4 = (int *)*puVar5;
      iVar2 = piVar4[2];
      if ((uint)(*piVar4 - iVar2) < 4) {
        FUN_00edff4c(piVar4,iVar2,4,1,1);
        iVar2 = piVar4[2];
      }
      *(undefined4 *)(piVar4[1] + iVar2) = 0x6c6c756e;
      piVar4[2] = iVar2 + 4;
LAB_00e6a424:
      *(undefined1 *)(puVar5 + 4) = 1;
      return 0;
    }
    piVar4 = (int *)*puVar5;
    iVar2 = piVar4[2];
    iVar3 = *piVar4;
    *(undefined1 *)(puVar5 + 4) = 0;
    puVar5[3] = puVar5[3] + 1;
    if (iVar3 == iVar2) {
      FUN_00edff4c(piVar4,iVar2,1,1,1);
      iVar2 = piVar4[2];
    }
    *(undefined1 *)(piVar4[1] + iVar2) = 0x7b;
    piVar4[2] = iVar2 + 1;
    local_38 = CONCAT22(local_38._2_2_,0x100);
    local_34 = puVar5;
    iVar2 = FUN_00e5b230(&local_38,"target",6);
    puVar1 = local_34;
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((char)local_38 != '\x01') {
      piVar4 = (int *)*local_34;
      iVar2 = piVar4[2];
      if ((uint)(*piVar4 - iVar2) < 2) {
        FUN_00edff4c(piVar4,iVar2,2,1,1);
        iVar2 = piVar4[2];
      }
      piVar4[2] = iVar2 + 2;
      *(undefined2 *)(piVar4[1] + iVar2) = 0x203a;
      if ((uVar6 & 1) == 0) {
        piVar4 = (int *)*puVar1;
        iVar2 = piVar4[2];
        if ((uint)(*piVar4 - iVar2) < 4) {
          FUN_00edff4c(piVar4,iVar2,4,1,1);
          iVar2 = piVar4[2];
        }
        *(undefined4 *)(piVar4[1] + iVar2) = 0x6c6c756e;
        piVar4[2] = iVar2 + 4;
      }
      else {
        FUN_00efe8d4((int)*(undefined8 *)(param_2 + 2),*puVar1);
      }
      *(undefined1 *)(puVar1 + 4) = 1;
      iVar2 = FUN_00e5b230(&local_38,"approx_wall_consumption",0x17);
      puVar1 = local_34;
      if (iVar2 != 0) {
        return iVar2;
      }
      if ((char)local_38 != '\x01') {
        piVar4 = (int *)*local_34;
        iVar2 = piVar4[2];
        if ((uint)(*piVar4 - iVar2) < 2) {
          FUN_00edff4c(piVar4,iVar2,2,1,1);
          iVar2 = piVar4[2];
        }
        piVar4[2] = iVar2 + 2;
        uVar6 = param_2[4];
        *(undefined2 *)(piVar4[1] + iVar2) = 0x203a;
        if ((uVar6 & 1) == 0) {
          FUN_00f1f6ac(*puVar1,&DAT_00567318,4);
        }
        else {
          FUN_00efe8d4((int)*(undefined8 *)(param_2 + 6),*puVar1);
        }
        *(undefined1 *)(puVar1 + 4) = 1;
        iVar2 = FUN_00e5b230(&local_38,"measured_wall_consumption",0x19);
        puVar1 = local_34;
        if (iVar2 != 0) {
          return iVar2;
        }
        if ((char)local_38 != '\x01') {
          FUN_00f1f6ac(*local_34,&DAT_00414a7c,2);
          if ((param_2[8] & 1) == 0) {
            FUN_00f1f6ac(*puVar1,&DAT_00567318,4);
          }
          else {
            FUN_00efe8d4((int)*(undefined8 *)(param_2 + 10),*puVar1);
          }
          *(undefined1 *)(puVar1 + 4) = 1;
          iVar2 = FUN_00e5b230(&local_38,"measured_chip_consumption",0x19);
          puVar1 = local_34;
          if (iVar2 != 0) {
            return iVar2;
          }
          if ((char)local_38 != '\x01') {
            FUN_00f1f6ac(*local_34,&DAT_00414a7c,2);
            if ((param_2[0xc] & 1) == 0) {
              FUN_00f1f6ac(*puVar1,&DAT_00567318,4);
            }
            else {
              FUN_00efe8d4((int)*(undefined8 *)(param_2 + 0xe),*puVar1);
            }
            local_30 = local_38;
            *(undefined1 *)(puVar1 + 4) = 1;
            local_2c = local_34;
            FUN_00e5c7e0(&local_30);
            goto LAB_00e6a424;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
}

