// FUN_00095390 @ 00095390  size=784  callers=3
// program: bmminer


undefined4 FUN_00095390(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int extraout_r1;
  int extraout_r1_00;
  uint in_fpscr;
  double dVar5;
  double dVar6;
  int local_c;
  
  uVar1 = (*(code *)param_1[3])(param_2);
  FUN_0009863c(uVar1,param_1[2]);
  local_c = *(int *)(param_1[1] + extraout_r1 * 4);
  while ((local_c != 0 &&
         (iVar2 = (*(code *)param_1[4])(param_2,*(undefined4 *)(local_c + 4)), iVar2 == 0))) {
    local_c = *(int *)(local_c + 0x10);
  }
  if (local_c == 0) {
    dVar5 = (double)VectorUnsignedToFloat(*param_1,(byte)(in_fpscr >> 0x16) & 3);
    dVar6 = (double)VectorUnsignedToFloat(param_1[2],(byte)(in_fpscr >> 0x16) & 3);
    if ((dVar5 <= dVar6 * 1.3) || (iVar2 = FUN_0009505c(param_1), iVar2 == 0)) {
      puVar3 = calloc(1,0x14);
      if (puVar3 == (undefined4 *)0x0) {
        piVar4 = __errno_location();
        FUN_00095b4c(2,"src/zc_hashtable.c",0xd4,"calloc fail, errno[%d]",*piVar4);
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = (*(code *)param_1[3])(param_2);
        *puVar3 = uVar1;
        puVar3[1] = param_2;
        puVar3[2] = param_3;
        puVar3[4] = 0;
        puVar3[3] = 0;
        FUN_0009863c(*puVar3,param_1[2]);
        if (*(int *)(param_1[1] + extraout_r1_00 * 4) != 0) {
          *(undefined4 **)(*(int *)(param_1[1] + extraout_r1_00 * 4) + 0xc) = puVar3;
          puVar3[4] = *(undefined4 *)(param_1[1] + extraout_r1_00 * 4);
        }
        *(undefined4 **)(param_1[1] + extraout_r1_00 * 4) = puVar3;
        *param_1 = *param_1 + 1;
        uVar1 = 0;
      }
    }
    else {
      FUN_00095b4c(2,"src/zc_hashtable.c",0xcd,"rehash fail");
      uVar1 = 0xffffffff;
    }
  }
  else {
    if (param_1[5] != 0) {
      (*(code *)param_1[5])(*(undefined4 *)(local_c + 4));
    }
    if (param_1[6] != 0) {
      (*(code *)param_1[6])(*(undefined4 *)(local_c + 8));
    }
    *(undefined4 *)(local_c + 4) = param_2;
    *(undefined4 *)(local_c + 8) = param_3;
    uVar1 = 0;
  }
  return uVar1;
}

