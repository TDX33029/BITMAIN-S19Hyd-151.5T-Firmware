// FUN_0101efcc @ 0101efcc size=460 calls_out=5 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0101efcc(uint *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  puVar1 = (uint *)((uint)&local_30 | 4);
LAB_0101f010:
  uVar5 = *param_2;
  do {
    if ((uVar5 & 1) == 0) {
      FUN_01a3ac04(&local_30,param_2 + 5,param_3);
      uVar6 = local_28;
      uVar4 = local_2c;
      uVar3 = local_30;
      if (local_30 == 3) {
        uVar5 = param_2[0xd];
        uVar3 = param_2[0xe];
        *param_1 = param_2[0xc];
        param_1[1] = uVar5;
        param_1[2] = uVar3;
        param_2[0xc] = 0;
        param_2[0xd] = 4;
        param_2[0xe] = 0;
        return;
      }
      if (local_30 == 4) {
        *param_1 = 0x80000000;
        return;
      }
      if ((*param_2 != 0) && ((char)param_2[4] == '\0')) {
        FUN_005f0118(param_2 + 1);
      }
      *param_2 = 1;
      param_2[1] = uVar3;
      *(undefined1 *)(param_2 + 4) = 0;
      param_2[2] = uVar4;
      param_2[3] = uVar6;
    }
    else {
      if ((char)param_2[4] != '\0') {
        if ((char)param_2[4] == '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c19cfc);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c19cfc);
      }
      uVar3 = param_2[1];
      local_2c = param_2[2];
      local_28 = param_2[3];
      local_30 = uVar3;
      if (uVar3 != 2) break;
      FUN_005f0118(&local_30);
      *(undefined1 *)(param_2 + 4) = 1;
      *param_2 = 0;
    }
    uVar5 = uVar5 ^ 1;
  } while( true );
  uVar5 = param_2[0xe];
  *(undefined1 *)(param_2 + 4) = 1;
  uVar6 = *puVar1;
  uVar4 = puVar1[1];
  *param_2 = 0;
  if (param_2[0xc] == uVar5) {
    FUN_0132b898(param_2 + 0xc,uVar5,1,4,0xc);
    uVar5 = param_2[0xe];
  }
  param_2[0xe] = uVar5 + 1;
  puVar2 = (uint *)(param_2[0xd] + uVar5 * 0xc);
  *puVar2 = uVar3;
  puVar2[1] = uVar6;
  puVar2[2] = uVar4;
  goto LAB_0101f010;
}

