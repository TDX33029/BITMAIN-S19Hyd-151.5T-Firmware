// FUN_015200d0 @ 015200d0 size=336 calls_out=8 calls_in=1
// strings: oneOf

void FUN_015200d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  undefined1 auStack_170 [56];
  int *local_138;
  int local_134;
  undefined1 auStack_e0 [136];
  undefined1 local_58;
  int local_50;
  undefined *local_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int *local_3c;
  int local_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  uVar3 = (uint)*param_4;
  bVar8 = uVar3 == 4;
  if (bVar8) {
    uVar3 = *(uint *)(param_4 + 0xc);
  }
  if (bVar8 && uVar3 == 1) {
    uVar5 = *(undefined4 *)(param_4 + 8);
    FUN_01526248(auStack_170,param_2,"oneOf",5);
    FUN_015276e8(auStack_e0,auStack_170,0);
    uVar2 = FUN_016731b0(local_58,uVar5);
    FUN_0156aca8(&local_50,auStack_e0,uVar5,uVar2);
    if (local_50 == 0) {
      piVar4 = (int *)0x0;
      puVar7 = local_4c;
    }
    else {
      local_30 = local_48;
      iStack_2c = local_44;
      iStack_28 = iStack_40;
      do {
        iVar6 = *local_138;
        bVar8 = (bool)hasExclusiveAccess(local_138);
      } while (!bVar8);
      *local_138 = iVar6 + 1;
      if (iVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x152021c);
        (*pcVar1)();
      }
      local_38 = local_134;
      local_3c = local_138;
      piVar4 = (int *)thunk_FUN_01be5118(0x1c);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x1c);
      }
      *piVar4 = local_50;
      piVar4[1] = (int)local_4c;
      piVar4[2] = local_48;
      piVar4[3] = local_44;
      piVar4[4] = iStack_40;
      piVar4[5] = (int)local_3c;
      piVar4[6] = local_38;
      puVar7 = &DAT_01cfb350;
    }
    FUN_014ff9e0(auStack_e0);
    FUN_014ff9e0(auStack_170);
    param_1[1] = piVar4;
    param_1[2] = puVar7;
  }
  else {
    FUN_01528bf0(param_1 + 1,param_2,param_4);
  }
  *param_1 = 1;
  return;
}

