// FUN_01969e90 @ 01969e90 size=780 calls_out=9 calls_in=3
// strings: internal error: entered unreachable code | internal error: entered unreachable code

int FUN_01969e90(undefined1 *param_1,undefined4 *param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
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
    uVar7 = 4;
    uVar6 = *(undefined4 *)*param_2;
    pcVar2 = &DAT_0056d030;
    break;
  case 1:
    pcVar2 = "true\x1e\x05";
    if (param_1[1] == '\0') {
      pcVar2 = "f";
    }
    uVar6 = *(undefined4 *)*param_2;
    uVar7 = 5;
    if (param_1[1] != '\0') {
      uVar7 = 4;
    }
    break;
  case 2:
    iVar3 = FUN_0196a980(param_1 + 8,*param_2);
    return iVar3;
  case 3:
    FUN_0196a1e4(&local_50,*param_2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    goto LAB_01969f54;
  case 4:
    iVar3 = FUN_01969c74(param_2,param_1 + 4);
    return iVar3;
  case 5:
    puVar5 = (undefined4 *)*param_2;
    iVar4 = param_2[3];
    *(undefined1 *)(param_2 + 4) = 0;
    param_2[3] = iVar4 + 1;
    iVar3 = *(int *)(param_1 + 0xc);
    FUN_01968ab4(&local_50,*puVar5,"{",1);
    if ((char)local_50 == '\x04') {
      uVar1 = 0x100;
      if (iVar3 == 0) {
        param_2[3] = iVar4;
        FUN_01968ab4(&local_50,*puVar5,"}",1);
        if ((char)local_50 != '\x04') goto LAB_0196a140;
        uVar1 = 0;
      }
      local_48 = *(int *)(param_1 + 4);
      local_44 = *(undefined4 *)(param_1 + 8);
      local_30 = iVar3;
      if (local_48 == 0) {
        local_30 = 0;
      }
      local_50 = (uint)(local_48 != 0);
      local_3c = 0;
      local_4c = 0;
      local_58 = uVar1;
      local_54 = param_2;
      local_40 = local_50;
      local_38 = local_48;
      local_34 = local_44;
      while( true ) {
        uVar8 = FUN_01a41998(&local_50);
        iVar3 = (int)uVar8;
        if (iVar3 == 0) break;
        iVar3 = FUN_0196a35c(&local_58,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
        param_2 = local_54;
        if (iVar3 != 0) {
          return iVar3;
        }
        if ((char)local_58 == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d273b0);
        }
        FUN_01968ab4(&local_28,*(undefined4 *)*local_54,0x5312dd,2);
        if ((char)local_28 != '\x04') goto LAB_0196a148;
        iVar3 = FUN_01969e90((int)((ulonglong)uVar8 >> 0x20),param_2);
        if (iVar3 != 0) {
          return iVar3;
        }
        *(undefined1 *)(param_2 + 4) = 1;
      }
      if ((local_58 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffc0);
      }
      if ((local_58 & 0xff00) == 0) {
        return 0;
      }
      iVar3 = param_2[3];
      puVar5 = (undefined4 *)*param_2;
      param_2[3] = iVar3 + -1;
      if (*(char *)(param_2 + 4) != '\x01') {
LAB_0196a160:
        uVar6 = *puVar5;
        uVar7 = 1;
        pcVar2 = "}";
        break;
      }
      FUN_01968ab4(&local_50,*puVar5,"\n",1);
      if ((char)local_50 == '\x04') {
        uVar6 = param_2[1];
        uVar7 = param_2[2];
        do {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) {
            local_50 = CONCAT31(local_50._1_3_,4);
            goto LAB_0196a160;
          }
          FUN_01968ab4(&local_50,*puVar5,uVar6,uVar7);
        } while ((char)local_50 == '\x04');
      }
    }
    goto LAB_0196a140;
  }
  FUN_01968ab4(&local_50,uVar6,pcVar2,uVar7);
LAB_01969f54:
  iVar3 = 0;
  if ((char)local_50 != '\x04') {
LAB_0196a140:
    local_28 = local_50;
    local_24 = local_4c;
LAB_0196a148:
    iVar3 = FUN_01966f50(local_28,local_24);
  }
  return iVar3;
}

