// FUN_0093a808 @ 0093a808 size=908 calls_out=14 calls_in=2
// strings: a Display implementation returned an error unexpectedly

int FUN_0093a808(int param_1,int *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int *local_50;
  int *local_4c;
  byte local_46;
  undefined1 local_45;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  int *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 uStack_21;
  
  piVar4 = (int *)*param_2;
  iVar3 = piVar4[2];
  iVar8 = *piVar4;
  *(undefined1 *)(param_2 + 4) = 0;
  param_2[3] = param_2[3] + 1;
  if (iVar8 == iVar3) {
    FUN_00933680(piVar4,iVar3,1,1,1);
    iVar3 = piVar4[2];
  }
  *(undefined1 *)(piVar4[1] + iVar3) = 0x7b;
  piVar4[2] = iVar3 + 1;
  local_50 = (int *)CONCAT22(local_50._2_2_,0x100);
  bVar1 = *(byte *)(param_1 + 0x5c);
  uVar2 = *(undefined1 *)(param_1 + 0x5d);
  local_4c = param_2;
  iVar3 = FUN_00947ca4(&local_50,&DAT_0035b835,5);
  piVar4 = local_4c;
  if (iVar3 == 0) {
    if ((char)local_50 == '\x01') {
LAB_0093aaf0:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
    }
    piVar5 = (int *)*local_4c;
    iVar3 = piVar5[2];
    if ((uint)(*piVar5 - iVar3) < 2) {
      FUN_00933680(piVar5,iVar3,2,1,1);
      iVar3 = piVar5[2];
    }
    piVar5[2] = iVar3 + 2;
    *(undefined2 *)(piVar5[1] + iVar3) = 0x203a;
    local_46 = bVar1 & 1;
    iVar6 = *piVar4;
    local_34 = (int *)&DAT_01868210;
    local_38 = &local_44;
    local_3c = 0;
    local_44 = 0;
    local_2c = 0;
    local_40 = 1;
    local_30 = &DAT_60000020;
    local_45 = uVar2;
    iVar3 = FUN_0093efbc(&local_46,&local_38);
    uVar7 = local_40;
    iVar8 = local_44;
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_21,
                   &DAT_01868228,&DAT_018af130);
    }
    FUN_00947e44(&local_38,iVar6,local_40,local_3c);
    iVar3 = 0;
    if (((uint)local_38 & 0xff) != 4) {
      iVar3 = FUN_0157c4a0(local_38,local_34);
    }
    if (iVar8 != 0) {
      thunk_FUN_016d3fb4(uVar7);
    }
    if (iVar3 == 0) {
      *(undefined1 *)(piVar4 + 4) = 1;
      uVar7 = *(undefined4 *)(param_1 + 0x44);
      uVar9 = *(undefined4 *)(param_1 + 0x48);
      iVar3 = FUN_00947ca4(&local_50,&DAT_0035b83a,0xb);
      piVar4 = local_4c;
      if (iVar3 == 0) {
        if ((char)local_50 == '\x01') goto LAB_0093aaf0;
        piVar5 = (int *)*local_4c;
        iVar3 = piVar5[2];
        if ((uint)(*piVar5 - iVar3) < 2) {
          FUN_00933680(piVar5,iVar3,2,1,1);
          iVar3 = piVar5[2];
        }
        piVar5[2] = iVar3 + 2;
        *(undefined2 *)(piVar5[1] + iVar3) = 0x203a;
        FUN_00947e44(&local_38,*piVar4,uVar7,uVar9);
        if ((char)local_38 != '\x04') {
          iVar3 = FUN_0157c4a0(local_38,local_34);
          return iVar3;
        }
        *(undefined1 *)(piVar4 + 4) = 1;
        iVar3 = FUN_00949f20((int)*(undefined8 *)(param_1 + 0x38),&local_50,0x35b845,0xf);
        if (iVar3 == 0) {
          if ((char)local_50 != '\0') {
            local_38 = (int *)0xa;
            iVar3 = FUN_0157c50c(&local_38,0,0);
            return iVar3;
          }
          iVar3 = FUN_00949914(&local_50,&DAT_0035b854,0x11,*(undefined4 *)(param_1 + 0x58));
          if (((iVar3 == 0) && (iVar3 = FUN_0093abf0(&local_50,param_1), iVar3 == 0)) &&
             (iVar3 = FUN_0093b014(&local_50,*(undefined4 *)(param_1 + 0x50),
                                   *(undefined4 *)(param_1 + 0x54)), iVar3 == 0)) {
            local_38 = local_50;
            local_34 = local_4c;
            FUN_009074c0(&local_38);
            return 0;
          }
        }
      }
    }
  }
  return iVar3;
}

