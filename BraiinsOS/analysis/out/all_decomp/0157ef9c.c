// FUN_0157ef9c @ 0157ef9c size=840 calls_out=9 calls_in=3
// strings: 

int FUN_0157ef9c(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint local_58;
  undefined4 *local_54;
  uint local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  uint local_28;
  undefined4 local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar5 = *(undefined4 *)*param_2;
    puVar1 = &DAT_00567318;
LAB_0157f03c:
    uVar6 = 4;
    break;
  case 1:
    uVar5 = *(undefined4 *)*param_2;
    if (param_1[1] != '\0') {
      puVar1 = &DAT_00568b2c;
      goto LAB_0157f03c;
    }
    uVar6 = 5;
    puVar1 = &DAT_00414fdc;
    break;
  case 2:
    iVar2 = FUN_0157fdec(param_1 + 8,*param_2);
    return iVar2;
  case 3:
    FUN_0157f904(&local_50,*param_2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    goto LAB_0157f258;
  case 4:
    iVar2 = FUN_0157eb80(param_2,param_1 + 4);
    return iVar2;
  case 5:
    puVar4 = (undefined4 *)*param_2;
    iVar3 = param_2[3];
    iVar2 = *(int *)(param_1 + 0xc);
    *(undefined1 *)(param_2 + 4) = 0;
    param_2[3] = iVar3 + 1;
    FUN_0157a340(&local_50,*puVar4,&DAT_004144eb,1);
    if ((char)local_50 == '\x04') {
      local_58 = 0x100;
      if (iVar2 == 0) {
        param_2[3] = iVar3;
        FUN_0157a340(&local_50,*puVar4,"}",1);
        if ((char)local_50 != '\x04') goto LAB_0157f2d0;
        local_58 = 0;
      }
      local_48 = *(int *)(param_1 + 4);
      local_44 = *(undefined4 *)(param_1 + 8);
      local_30 = iVar2;
      if (local_48 == 0) {
        local_30 = 0;
      }
      local_50 = (uint)(local_48 != 0);
      local_3c = 0;
      local_4c = 0;
      local_54 = param_2;
      local_40 = local_50;
      local_38 = local_48;
      local_34 = local_44;
      uVar7 = FUN_00f45584(&local_50);
      while( true ) {
        iVar2 = (int)uVar7;
        if (iVar2 == 0) break;
        iVar2 = FUN_0157f32c(&local_58,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
        param_2 = local_54;
        if (iVar2 != 0) {
          return iVar2;
        }
        if ((char)local_58 == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
        }
        FUN_0157a340(&local_28,*(undefined4 *)*local_54,&DAT_00414a7c,2);
        if ((char)local_28 != '\x04') goto LAB_0157f298;
        iVar2 = FUN_0157ef9c((int)((ulonglong)uVar7 >> 0x20),param_2);
        if (iVar2 != 0) {
          return iVar2;
        }
        *(undefined1 *)(param_2 + 4) = 1;
        uVar7 = FUN_00f45584(&local_50);
      }
      if ((local_58 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9514);
      }
      if ((local_58 & 0xff00) == 0) {
        return 0;
      }
      iVar2 = param_2[3];
      puVar4 = (undefined4 *)*param_2;
      param_2[3] = iVar2 + -1;
      if (*(char *)(param_2 + 4) == '\0') {
LAB_0157f270:
        FUN_0157a340(&local_28,*puVar4,"}",1);
      }
      else {
        FUN_0157a340(&local_28,*puVar4,&DAT_0041950e,1);
        if ((char)local_28 != '\x04') goto LAB_0157f298;
        uVar5 = param_2[1];
        uVar6 = param_2[2];
        do {
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) goto LAB_0157f270;
          FUN_0157a340(&local_50,*puVar4,uVar5,uVar6);
        } while ((char)local_50 == '\x04');
        local_24 = local_4c;
        local_28 = local_50;
      }
      if ((local_28 & 0xff) == 4) {
        return 0;
      }
LAB_0157f298:
      iVar2 = FUN_0157c4a0(local_28,local_24);
      return iVar2;
    }
    goto LAB_0157f2d0;
  }
  FUN_0157a340(&local_50,uVar5,puVar1,uVar6);
LAB_0157f258:
  if ((char)local_50 == '\x04') {
    return 0;
  }
LAB_0157f2d0:
  iVar2 = FUN_0157c4a0(local_50,local_4c);
  return iVar2;
}

