// FUN_0197f9fc @ 0197f9fc size=940 calls_out=1 calls_in=3
// strings: 

undefined4
FUN_0197f9fc(undefined4 *param_1,int ****param_2,int *param_3,int *param_4,uint param_5,
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
  if (param_2 == (int ****)0x0 && (*(byte *)(piVar7 + 4) & 1) == 0) {
LAB_0197fc2c:
    uVar4 = 0;
    param_1[1] = iVar8 + 1;
  }
  else {
    puVar2 = (undefined4 *)*piVar7;
    local_5c = param_2;
    if (iVar8 == 0) {
      local_58 = (undefined4 ******)(piVar7 + 3);
      local_54 = FUN_012fd02c;
      iVar3 = FUN_012fa178(*puVar2,puVar2[1],&DAT_00525a27,&local_58);
      if (iVar3 == 0) {
        if ((char)piVar7[4] == '\x01') {
          local_4c = CONCAT22(local_4c._2_2_,10);
          local_54 = (code *)&DAT_0197fdfc;
          local_58 = (undefined4 ******)&local_5c;
          uVar5 = ((undefined4 *)*piVar7)[1];
          uVar4 = *(undefined4 *)*piVar7;
          puVar6 = &DAT_00525a32;
          goto LAB_0197fb1c;
        }
        goto LAB_0197fb2c;
      }
    }
    else {
      iVar3 = (**(code **)(puVar2[1] + 0xc))(*puVar2,&DAT_00525a3e,6);
      if (iVar3 == 0) {
        if ((char)piVar7[4] == '\x01') {
          local_4c = CONCAT22(local_4c._2_2_,0xd);
          local_54 = (code *)&DAT_0197a814;
          local_58 = (undefined4 ******)&DAT_00570850;
          uVar5 = ((undefined4 *)*piVar7)[1];
          uVar4 = *(undefined4 *)*piVar7;
          puVar6 = &DAT_0056fcd8;
LAB_0197fb1c:
          local_50 = 0;
          iVar3 = FUN_012fa178(uVar4,uVar5,puVar6,&local_58);
          if (iVar3 != 0) goto LAB_0197fc0c;
        }
LAB_0197fb2c:
        if (*param_3 == 3) {
          iVar3 = (**(code **)(((undefined4 *)*piVar7)[1] + 0xc))
                            (*(undefined4 *)*piVar7,&DAT_00525a44,9);
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
            puVar6 = &DAT_00531476;
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
            puVar6 = &DAT_00590e5f;
          }
          local_2c = FUN_0197fe04;
          iVar3 = FUN_012fa178(uVar4,uVar5,puVar6,&local_30);
        }
        if (iVar3 == 0) {
          uVar9 = (**(code **)(((undefined4 *)*piVar7)[1] + 0xc))(*(undefined4 *)*piVar7,"\n",1);
          if ((int)uVar9 == 0) {
            uVar1 = (uint)((ulonglong)uVar9 >> 0x20);
            if (*param_4 != 2) {
              uVar1 = param_5;
            }
            if (*param_4 == 2 || (uVar1 & 1) == 0) goto LAB_0197fc2c;
            local_28 = param_6;
            if ((char)piVar7[4] == '\x01') {
              local_4c = CONCAT22(local_4c._2_2_,10);
              local_50 = 0;
              local_54 = (code *)&DAT_0197a814;
              local_58 = (undefined4 ******)&DAT_00570850;
              iVar3 = FUN_012fa178(*(undefined4 *)*piVar7,((undefined4 *)*piVar7)[1],&DAT_0056fcd8,
                                   &local_58);
              if (iVar3 != 0) goto LAB_0197fc0c;
            }
            iVar3 = (**(code **)(((undefined4 *)*piVar7)[1] + 0xc))
                              (*(undefined4 *)*piVar7,&DAT_005690b8,0x10);
            if (iVar3 == 0) {
              local_58 = (undefined4 ******)*piVar7;
              local_54 = (code *)*param_4;
              local_50 = param_4[1];
              local_4c = param_4[2];
              iVar3 = (**(code **)(piVar7[2] + 0x10))(piVar7[1],local_58,&local_54);
              if (iVar3 == 0) {
                local_58 = &local_28;
                local_54 = FUN_012fd02c;
                iVar3 = FUN_012fa178(*(undefined4 *)*piVar7,((undefined4 *)*piVar7)[1],&DAT_005bdcec
                                     ,&local_58);
                if (iVar3 == 0) {
                  if ((param_7 & 1) != 0) {
                    local_58 = &local_30;
                    local_30 = param_8;
                    local_54 = FUN_012fd02c;
                    iVar3 = FUN_012fa178(*(undefined4 *)*piVar7,((undefined4 *)*piVar7)[1],
                                         &DAT_005bdcec,&local_58);
                    if (iVar3 != 0) goto LAB_0197fc0c;
                  }
                  iVar3 = (**(code **)(((undefined4 *)*piVar7)[1] + 0xc))
                                    (*(undefined4 *)*piVar7,"\n",1);
                  if (iVar3 != 0) {
                    return 1;
                  }
                  goto LAB_0197fc2c;
                }
              }
            }
          }
        }
      }
    }
LAB_0197fc0c:
    uVar4 = 1;
  }
  return uVar4;
}

