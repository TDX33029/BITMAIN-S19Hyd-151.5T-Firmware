// FUN_007af820 @ 007af820 size=320 calls_out=2 calls_in=2
// strings: 

void FUN_007af820(uint *param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_30;
  uint local_2c;
  
  if (param_4 != 0) {
    uVar8 = param_4;
    do {
      uVar3 = uVar8;
      if (0xfff < uVar8) {
        uVar3 = 0x1000;
      }
      uVar8 = uVar8 - uVar3;
      uVar2 = 0;
      do {
        bVar1 = *(byte *)(param_3 + uVar2);
        uVar4 = *(uint *)(param_2 + 0x1010);
        uVar6 = *(uint *)(param_2 + 0x1018);
        uVar4 = *(uint *)("" + ((bVar1 ^ uVar4) & 0xff) * 4) ^ uVar4 >> 8;
        uVar5 = (*(int *)(param_2 + 0x1014) + (uVar4 & 0xff)) * 0x8088405 + 1;
        *(uint *)(param_2 + 0x1010) = uVar4;
        *(uint *)(param_2 + 0x1014) = uVar5;
        *(uint *)(param_2 + 0x1018) =
             *(uint *)("" + (uVar6 & 0xff ^ uVar5 >> 0x18) * 4) ^ uVar6 >> 8;
        if (uVar3 == uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,uVar3,&DAT_01c09d04);
        }
        iVar7 = param_2 + uVar2;
        uVar2 = uVar2 + 1;
        *(byte *)(iVar7 + 0x10) = bVar1 ^ (byte)(((uVar6 | 2) ^ 1) * (uVar6 | 2) >> 8);
      } while (uVar3 != uVar2);
      FUN_007b01f0(&local_30,param_2,param_2 + 0x10);
      if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) {
        *param_1 = local_30;
        param_1[1] = local_2c;
        return;
      }
      param_3 = param_3 + uVar3;
    } while (uVar8 != 0);
  }
  *(undefined1 *)param_1 = 4;
  param_1[1] = param_4;
  return;
}

