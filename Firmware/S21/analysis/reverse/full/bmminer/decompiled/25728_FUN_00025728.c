// FUN_00025728 @ 00025728  size=608  callers=4
// program: bmminer


code * FUN_00025728(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  code *pcVar4;
  uint in_fpscr;
  double dVar5;
  uint local_2010 [2049];
  
  uVar1 = FUN_00025474();
  dVar5 = (double)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  iVar3 = (int)(longlong)(dVar5 * 0.975);
  DAT_000c0448 = (code *)((iVar3 / 1000) * 1000);
  pcVar2 = (char *)FUN_0002a4e4(iVar3 * 0x10624dd3);
  iVar3 = strcmp(pcVar2,"H6HB70601");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70602");
    if (iVar3 != 0) {
      pcVar2 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar2,"H6HB70501");
      if (iVar3 != 0) {
        pcVar2 = (char *)FUN_0002a4e4();
        iVar3 = strcmp(pcVar2,"H6HB70801");
        if (iVar3 != 0) {
          pcVar2 = (char *)FUN_0002a4e4();
          iVar3 = strcmp(pcVar2,"H6HB70802");
          if (iVar3 != 0) goto LAB_000257f0;
        }
      }
    }
  }
  pcVar2 = (char *)FUN_0002a4e4();
  iVar3 = strcmp(pcVar2,"H6HB70601");
  if (iVar3 == 0) {
    pcVar4 = (code *)0x5f758;
  }
  else {
    pcVar2 = (char *)FUN_0002a4e4();
    iVar3 = strcmp(pcVar2,"H6HB70602");
    if (iVar3 == 0) {
      pcVar4 = (code *)0x68fb0;
    }
    else {
      pcVar2 = (char *)FUN_0002a4e4();
      iVar3 = strcmp(pcVar2,"H6HB70501");
      if (iVar3 == 0) {
        pcVar4 = (code *)0x737a8;
        if ((int)DAT_000c0448 < 0x6ddd1) {
          pcVar4 = FUN_0006b6c0;
        }
      }
      else {
        pcVar2 = (char *)FUN_0002a4e4();
        iVar3 = strcmp(pcVar2,"H6HB70801");
        if (iVar3 == 0) {
LAB_0002592c:
          local_2010[0] = 0x2b2;
          FUN_0001c934(0,(undefined1)DAT_000c94e8,local_2010);
          if (local_2010[0] < 0x28a) {
            if (local_2010[0] < 600) {
              if (local_2010[0] < 0x21c) goto LAB_00025924;
              pcVar4 = (code *)0x46500;
            }
            else {
              pcVar4 = (code *)0x4baf0;
            }
          }
          else {
            pcVar4 = (code *)0x510e0;
          }
        }
        else {
          pcVar2 = (char *)FUN_0002a4e4();
          iVar3 = strcmp(pcVar2,"H6HB70802");
          if (iVar3 == 0) goto LAB_0002592c;
LAB_00025924:
          pcVar4 = DAT_000c0448;
        }
      }
    }
  }
  DAT_000c0448 = (code *)((DAT_000be5f8 * (int)pcVar4) / 100);
LAB_000257f0:
  if (4 < DAT_000be63c) {
    snprintf((char *)local_2010,0x2000,"sale_hash_rate = %d, hash_rate_budget = %d\n",
             (int)DAT_000c0448,0);
    FUN_0004948c(4,local_2010,0);
  }
  return DAT_000c0448;
}

