// FUN_007b3a00 @ 007b3a00 size=332 calls_out=3 calls_in=2
// strings: 

void FUN_007b3a00(uint *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint local_30;
  uint local_2c;
  
  if (param_4 != 0) {
    puVar5 = param_2 + 0x45e;
    uVar1 = *puVar5;
    uVar7 = 0;
    do {
      uVar4 = 0x1000 - uVar1;
      if (param_4 - uVar7 < 0x1000 - uVar1) {
        uVar4 = param_4 - uVar7;
      }
      uVar2 = uVar4 + uVar1;
      if ((uVar2 < uVar1) || (0x1000 < uVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar1,uVar2,0x1000,&DAT_01c09df8);
      }
      FUN_01bed4e2((int)(param_2 + 0x5e) + uVar1,param_3 + uVar7,uVar4);
      uVar1 = *puVar5 + uVar4;
      *puVar5 = uVar1;
      if (uVar1 == 0x1000) {
        iVar6 = 0;
        do {
          iVar3 = (int)param_2 + iVar6 + 0x178;
          FUN_007b4458(param_2 + 2,iVar3,iVar3);
          iVar6 = iVar6 + 0x10;
        } while (iVar6 != 0x1000);
        (**(code **)(param_2[1] + 0x1c))(&local_30,*param_2,param_2 + 0x5e,0x1000);
        if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) {
          *param_1 = local_30;
          param_1[1] = local_2c;
          return;
        }
        uVar1 = 0;
        *puVar5 = 0;
      }
      uVar7 = uVar4 + uVar7;
    } while (uVar7 < param_4);
  }
  *(undefined1 *)param_1 = 4;
  param_1[1] = param_4;
  return;
}

