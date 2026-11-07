// FUN_015c428c @ 015c428c size=964 calls_out=1 calls_in=3
// strings:              at StartTaskAbortedstruct HashChain

undefined4
FUN_015c428c(undefined4 *param_1,int ****param_2,int *param_3,int *param_4,uint param_5,
            undefined4 *****param_6,uint param_7,int ******param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  int ****local_5c;
  undefined4 ******local_58;
  code *local_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int ******local_30;
  code *local_2c;
  undefined4 *****local_28;
  
  piVar7 = (int *)*param_1;
  iVar8 = param_1[1];
  if (param_2 == (int ****)0x0 && (*(byte *)(piVar7 + 4) & 1) == 0) goto LAB_015c44d4;
  puVar2 = (undefined4 *)*piVar7;
  local_5c = param_2;
  if (iVar8 == 0) {
    local_58 = (undefined4 ******)(piVar7 + 3);
    local_54 = (code *)&LAB_00fac484;
    iVar3 = FUN_00fa948c(*puVar2,puVar2[1],&DAT_0040faff,&local_58);
    if (iVar3 != 0) {
      return 1;
    }
    if ((char)piVar7[4] == '\x01') {
      local_4c = CONCAT22(local_4c._2_2_,10);
      local_50 = 0;
      local_54 = FUN_015c46a4;
      local_58 = (undefined4 ******)&local_5c;
      iVar3 = FUN_00fa948c(*(undefined4 *)*piVar7,((undefined4 *)*piVar7)[1],&DAT_0040fb0a,&local_58
                          );
      goto joined_r0x015c43c8;
    }
  }
  else {
    iVar3 = (**(code **)(puVar2[1] + 0xc))(*puVar2,&DAT_0040fb16,6);
    if (iVar3 != 0) {
      return 1;
    }
    if ((char)piVar7[4] == '\x01') {
      local_4c = CONCAT22(local_4c._2_2_,0xd);
      local_50 = 0;
      local_54 = (code *)&DAT_015bee04;
      local_58 = (undefined4 ******)&DAT_0056a308;
      iVar3 = FUN_00fa948c(*(undefined4 *)*piVar7,((undefined4 *)*piVar7)[1],&DAT_00569a60,&local_58
                          );
joined_r0x015c43c8:
      if (iVar3 != 0) {
        return 1;
      }
    }
  }
  if (*param_3 == 3) {
    iVar3 = (**(code **)(((undefined4 *)*piVar7)[1] + 0xc))(*(undefined4 *)*piVar7,&DAT_0040fb1c,9);
  }
  else {
    local_30 = (int ******)&local_58;
    if ((char)piVar7[4] == '\0') {
      local_58 = (undefined4 ******)*param_3;
      local_54 = (code *)param_3[1];
      local_50 = param_3[2];
      local_4c = param_3[3];
      iStack_48 = param_3[4];
      local_44 = param_3[5];
      iStack_40 = param_3[6];
      iStack_3c = param_3[7];
      iStack_38 = param_3[8];
      iStack_34 = param_3[9];
      uVar5 = ((undefined4 *)*piVar7)[1];
      uVar4 = *(undefined4 *)*piVar7;
      puVar6 = &DAT_00414b9a;
    }
    else {
      local_58 = (undefined4 ******)*param_3;
      local_54 = (code *)param_3[1];
      local_50 = param_3[2];
      local_4c = param_3[3];
      iStack_48 = param_3[4];
      local_44 = param_3[5];
      iStack_40 = param_3[6];
      iStack_3c = param_3[7];
      iStack_38 = param_3[8];
      iStack_34 = param_3[9];
      uVar5 = ((undefined4 *)*piVar7)[1];
      uVar4 = *(undefined4 *)*piVar7;
      puVar6 = &DAT_00590e71;
    }
    local_2c = FUN_015c4758;
    iVar3 = FUN_00fa948c(uVar4,uVar5,puVar6,&local_30);
  }
  if (iVar3 == 0) {
    uVar9 = (**(code **)(((undefined4 *)*piVar7)[1] + 0xc))(*(undefined4 *)*piVar7,&DAT_0041950e,1);
    if ((int)uVar9 == 0) {
      uVar1 = (uint)((ulonglong)uVar9 >> 0x20);
      if (*param_4 != 2) {
        uVar1 = param_5;
      }
      if (*param_4 == 2 || (uVar1 & 1) == 0) {
LAB_015c44d4:
        param_1[1] = iVar8 + 1;
        return 0;
      }
      local_28 = param_6;
      if ((char)piVar7[4] == '\x01') {
        local_4c = CONCAT22(local_4c._2_2_,10);
        local_50 = 0;
        local_54 = (code *)&DAT_015bee04;
        local_58 = (undefined4 ******)&DAT_0056a308;
        iVar3 = FUN_00fa948c(*(undefined4 *)*piVar7,((undefined4 *)*piVar7)[1],&DAT_00569a60,
                             &local_58);
        if (iVar3 != 0) {
          return 1;
        }
      }
      iVar3 = (**(code **)(((undefined4 *)*piVar7)[1] + 0xc))
                        (*(undefined4 *)*piVar7,"             at StartTaskAbortedstruct HashChain",
                         0x10);
      if (iVar3 == 0) {
        local_58 = (undefined4 ******)*piVar7;
        local_54 = (code *)*param_4;
        local_50 = param_4[1];
        local_4c = param_4[2];
        iVar3 = (**(code **)(piVar7[2] + 0x10))(piVar7[1],local_58,&local_54);
        if (iVar3 == 0) {
          local_58 = &local_28;
          local_54 = (code *)&LAB_00fac484;
          iVar3 = FUN_00fa948c(*(undefined4 *)*piVar7,((undefined4 *)*piVar7)[1],&DAT_0059a08d,
                               &local_58);
          if (iVar3 == 0) {
            if ((param_7 & 1) != 0) {
              local_58 = &local_30;
              local_30 = param_8;
              local_54 = (code *)&LAB_00fac484;
              iVar3 = FUN_00fa948c(*(undefined4 *)*piVar7,((undefined4 *)*piVar7)[1],&DAT_0059a08d,
                                   &local_58);
              if (iVar3 != 0) {
                return 1;
              }
            }
            iVar3 = (**(code **)(((undefined4 *)*piVar7)[1] + 0xc))
                              (*(undefined4 *)*piVar7,&DAT_0041950e,1);
            if (iVar3 == 0) goto LAB_015c44d4;
          }
        }
      }
    }
  }
  return 1;
}

