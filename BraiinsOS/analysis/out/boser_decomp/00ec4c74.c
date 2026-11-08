// FUN_00ec4c74 @ 00ec4c74 size=440 calls_out=5 calls_in=1
// strings: gigahash_per_second | internal error: entered unreachable code

undefined4
FUN_00ec4c74(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  ulonglong in_d0;
  undefined4 local_38;
  undefined4 uStack_34;
  
  puVar3 = &local_38;
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2ffb0);
  }
  puVar7 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    FUN_01ac6cbc(*puVar7,",",1);
  }
  uVar1 = *puVar7;
  param_1[1] = '\x02';
  FUN_012650dc(&local_38,uVar1,param_2,param_3);
  if ((char)local_38 != '\x04') {
LAB_00ec4e00:
    uVar1 = FUN_01966f50(local_38,uStack_34);
    return uVar1;
  }
  FUN_01ac6cbc(*puVar7,":",1);
  if ((param_5 & 1) == 0) {
    uVar6 = 4;
    uVar1 = *puVar7;
    pcVar4 = &DAT_0056d030;
    goto LAB_00ec4dec;
  }
  FUN_01ac6cbc(*puVar7,"{",1);
  FUN_012650dc(&local_38,*puVar7,"gigahash_per_second",0x13);
  if ((char)local_38 != '\x04') goto LAB_00ec4e00;
  FUN_01ac6cbc(*puVar7,":",1);
  uVar2 = (uint)(in_d0 >> 0x20);
  if ((int)in_d0 == 0 && (in_d0 & 0xfffff00000000) == 0) {
    if ((int)in_d0 != 0 || (uVar2 & 0x7fffffff) != 0x7ff00000) goto LAB_00ec4dbc;
LAB_00ec4d80:
    iVar5 = 4;
    uVar1 = *puVar7;
    puVar3 = (undefined4 *)&DAT_0056d030;
  }
  else {
    if (0x7fefffff < (uVar2 & 0x7fffffff)) goto LAB_00ec4d80;
LAB_00ec4dbc:
    iVar5 = FUN_01afb0f8(&local_38);
    uVar1 = *puVar7;
    iVar5 = iVar5 - (int)&local_38;
  }
  FUN_01ac6cbc(uVar1,puVar3,iVar5);
  uVar6 = 1;
  uVar1 = *puVar7;
  pcVar4 = "}";
LAB_00ec4dec:
  FUN_01ac6cbc(uVar1,pcVar4,uVar6);
  return 0;
}

