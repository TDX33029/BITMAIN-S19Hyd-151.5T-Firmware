// FUN_011bfb38 @ 011bfb38 size=684 calls_out=4 calls_in=2
// strings: 

undefined4 FUN_011bfb38(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  cVar1 = *(char *)(param_1 + 0x29);
  iVar7 = param_1 + 0x18;
  cVar2 = *(char *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (cVar2 == '\x01') {
    iVar3 = *(int *)(param_1 + 0xc);
joined_r0x011bfba4:
    if (iVar3 != -0x80000000) {
      iVar6 = *(int *)(param_1 + 0x14);
      if (iVar6 == iVar3) {
        FUN_006029c0(param_1 + 0xc);
      }
      *(char *)(*(int *)(param_1 + 0x10) + iVar6) = cVar1;
      *(int *)(param_1 + 0x14) = iVar6 + 1;
    }
    if (cVar1 == *param_2) {
      cVar1 = *(char *)(param_1 + 0x29);
      cVar2 = *(char *)(param_1 + 0x28);
      *(undefined1 *)(param_1 + 0x28) = 0;
      if (cVar2 == '\0') {
        FUN_011ef738(&local_30,iVar7);
        if ((local_30 & 0xff) == 5) goto LAB_011bfd30;
        if ((local_30 & 0xff) != 4) goto LAB_011bfdd4;
        iVar3 = *(int *)(param_1 + 0xc);
        cVar1 = local_30._1_1_;
      }
      else {
        iVar3 = *(int *)(param_1 + 0xc);
      }
      if (iVar3 != -0x80000000) {
        iVar6 = *(int *)(param_1 + 0x14);
        if (iVar6 == iVar3) {
          FUN_006029c0(param_1 + 0xc);
        }
        *(char *)(*(int *)(param_1 + 0x10) + iVar6) = cVar1;
        *(int *)(param_1 + 0x14) = iVar6 + 1;
      }
      if (cVar1 == param_2[1]) {
        cVar1 = *(char *)(param_1 + 0x29);
        cVar2 = *(char *)(param_1 + 0x28);
        *(undefined1 *)(param_1 + 0x28) = 0;
        if (cVar2 == '\0') {
          FUN_011ef738(&local_30,iVar7);
          if ((local_30 & 0xff) == 5) goto LAB_011bfd30;
          if ((local_30 & 0xff) != 4) goto LAB_011bfdd4;
          iVar3 = *(int *)(param_1 + 0xc);
          cVar1 = local_30._1_1_;
        }
        else {
          iVar3 = *(int *)(param_1 + 0xc);
        }
        if (iVar3 != -0x80000000) {
          iVar6 = *(int *)(param_1 + 0x14);
          if (iVar6 == iVar3) {
            FUN_006029c0(param_1 + 0xc);
          }
          *(char *)(*(int *)(param_1 + 0x10) + iVar6) = cVar1;
          *(int *)(param_1 + 0x14) = iVar6 + 1;
        }
        if (cVar1 == param_2[2]) {
          if (param_3 == 3) {
            return 0;
          }
          cVar1 = *(char *)(param_1 + 0x29);
          cVar2 = *(char *)(param_1 + 0x28);
          *(undefined1 *)(param_1 + 0x28) = 0;
          if (cVar2 == '\0') {
            FUN_011ef738(&local_30,iVar7);
            if ((local_30 & 0xff) == 5) goto LAB_011bfd30;
            if ((local_30 & 0xff) != 4) {
LAB_011bfdd4:
              uVar4 = FUN_0157c4a0(local_30,uStack_2c);
              return uVar4;
            }
            iVar7 = *(int *)(param_1 + 0xc);
            cVar1 = local_30._1_1_;
          }
          else {
            iVar7 = *(int *)(param_1 + 0xc);
          }
          if (iVar7 == -0x80000000) {
            cVar2 = param_2[3];
          }
          else {
            iVar3 = *(int *)(param_1 + 0x14);
            if (iVar3 == iVar7) {
              FUN_006029c0(param_1 + 0xc);
            }
            *(char *)(*(int *)(param_1 + 0x10) + iVar3) = cVar1;
            *(int *)(param_1 + 0x14) = iVar3 + 1;
            cVar2 = param_2[3];
          }
          if (cVar1 == cVar2) {
            return 0;
          }
        }
      }
    }
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    local_30 = 9;
  }
  else {
    FUN_011ef738(&local_30,iVar7);
    if ((local_30 & 0xff) != 5) {
      if ((local_30 & 0xff) != 4) goto LAB_011bfdd4;
      iVar3 = *(int *)(param_1 + 0xc);
      cVar1 = local_30._1_1_;
      goto joined_r0x011bfba4;
    }
LAB_011bfd30:
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    local_30 = 5;
  }
  uVar4 = FUN_0157c50c(&local_30,uVar4,uVar5);
  return uVar4;
}

